
#include <iostream>
using std::cout;

template <class T>
class Pair1{
private:
    T m_x, m_y;
public:
    Pair1(const T& x, const T& y)
        : m_x(x), m_y(y) {}

    T& first(){return m_x; }
    const T& first() const { return m_x; }
    L &second() { return m_y; }
    const T& second() const { return m_y; }
};

int main(int argc, const char** argv){
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    return 0;
}