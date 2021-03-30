#include <iostream>
using std::cout;

template <class T, class L>
class Pair{
private:
    T m_x; 
    L m_y;
public:
    Pair(const T& x, const L& y)
        : m_x(x), m_y(y) {}

    const T& first() const { return m_x; }
    const L& second() const { return m_y; }
};

int main(int argc, const char** argv){
    Pair<int, double> p1(6, 7.8);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double, int> p2(3.4, 5);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}