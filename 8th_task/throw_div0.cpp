#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cerr;


template <typename T>
T divi(T x, T y)
{
    string thr = "DivisionByZero"; 
    if (y == 0)
    {
        throw thr;
    }
    return (x / y);
}

int main () {
    double dividend = 12;
    double divisor = 0;
    double quotient = 0;

    try
    {
        quotient = divi(dividend, divisor);
        cout << quotient << endl;
   } catch (string div0) {
       cerr << div0 << endl;
   }

   return 0;
}