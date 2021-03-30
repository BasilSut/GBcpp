#include <iostream>
#include <string>
using std::string;
using std::cout;

template <class T, class L>
class Pair{
private:
    T m_f;
    L m_s;

public:
    Pair(T f, L s) 
        : m_f(f), 
          m_s(s) { }

    T &first() { return m_f; }
    const T &first() const { return m_f; }
    L &second() { return m_s; }
    const L &second() const { return m_s; }
};

template <class T>
class StringValuePair : public Pair<string, T>{
public:
    StringValuePair(string str, T p) 
        : Pair<string, T>(str, p) { }
};

int main(int argc, const char** argv){
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    return 0;
}