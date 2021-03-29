#include <iostream>
#include <cassert> // для assert()

class ArrayInt
{
private:
    int m_length;
    int *m_data;

public:
    ArrayInt() : m_length(0), m_data(nullptr) {}

    ArrayInt(int length) : m_length(length)
    {
        assert(length >= 0);

        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    ~ArrayInt()
    {
        delete[] m_data;
    }

    void erase()
    {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }
    int getLength()
    {
        return m_length;
    }

    int &operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    void resize(int newLength)
    {
        if (newLength == m_length)
            return;

        if (newLength <= 0)
        {
            erase();
            return;
        }
        int *data = new int[newLength];

        if (m_length > 0)
        {
            int elementsToCopy = (newLength > m_length) ? m_length : newLength;
            for (int i = 0; i < elementsToCopy; ++i)
                data[i] = m_data[i];
        }
        delete[] m_data;
        // И используем вместо старого массива новый! Обратите внимание, m_data указывает
        // на тот же адрес, на который указывает наш новый динамически выделенный массив. Поскольку
        // данные были динамически выделенные — они не будут уничтожены, когда выйдут из области видимости
        m_data = data;
        m_length = newLength;
    }
    void delete_last_element()
    {
        int newLength = m_length - 1;
        int *data = new int[newLength];
        if (m_length > 0)
        {
            int elementsToCopy = m_length - 1;
            for (int i = 0; i < elementsToCopy; ++i)
                data[i] = m_data[i];
        }
        delete[] m_data;
        m_data = data;
        m_length = newLength;
    }
    void delete_first_element()
    {
        int newLength = m_length - 1;
        int *data = new int[newLength];
        if (m_length > 0)
        {
            int elementsToCopy = m_length + 1;
            for (int i = 0; i < elementsToCopy; ++i)
                data[i] = m_data[i + 1];
        }
        delete[] m_data;
        m_data = data;
        m_length = newLength;
    }

    void sortInsert()
    {
        int *arr = m_data;
        int len = m_length;

        int temp, pos;
        for (int i = 1; i < len; ++i)
        {
            temp = arr[i];
            pos = i - 1;
            while (pos >= 0 && arr[pos] > temp)
            {
                arr[pos + 1] = arr[pos];
                pos--;
            }
            arr[pos + 1] = temp;
        }
    }
    void printArr_container()
    {
        std::cout << "\n{ ";

        for (int i = 0; i < m_length; i++)
            if (i != m_length - 1)
                std::cout << m_data[i] << ", ";
            else
                std::cout << m_data[i];
        std::cout << " }"
                  << "\n";
    }
};

int main(){
    ArrayInt arr(6);
    arr[0] = 5; arr[1] = 3; arr[2] = 2;
    arr[3] = 1; arr[4] = 4; arr[5] = 7;
    //std::cout << sizeof(arr) / sizeof(arr[0]);
    arr.printArr_container();
    arr.sortInsert();
    arr.delete_last_element();
    arr.printArr_container();
    arr.delete_first_element();
    arr.printArr_container();
    //std::cout << sizeof(arr) / sizeof(arr[0]);
    return 0;
}