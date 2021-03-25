#include <iostream>
using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction():numerator(0),denominator(1){}
    Fraction(int numerator, int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    double getValue() const{
        return (double)numerator/denominator;
    }
    friend Fraction operator-(const Fraction &f1)
    {
        int a = (-1)* f1.numerator;
        int b = (-1) * f1.denominator;
        return Fraction(a, b);
    }
    
    friend bool operator==(const Fraction &f1, const Fraction &f2);

    friend Fraction operator+ (const Fraction &f1, const Fraction &f2);
    friend Fraction operator-(const Fraction &f1, const Fraction &f2);

    friend Fraction operator* (const Fraction &f1, const Fraction &f2);
    friend Fraction operator/ (const Fraction &f1, const Fraction &f2);
};



Fraction operator+(const Fraction &f1, const Fraction &f2){
    int a = f2.denominator * f1.numerator;
    int b = f1.denominator * f2.numerator;
    int z = f1.denominator * f2.denominator;
    return Fraction(a+b,z);
}

Fraction operator-(const Fraction &f1, const Fraction &f2){
        return Fraction(-f1.numerator, -f1.denominator);
}

    Fraction operator*(const Fraction &f1, const Fraction &f2)
    {
        int a = f2.numerator * f1.numerator;
        int b = f1.denominator * f2.denominator;
        return Fraction(a, b);
    }

    Fraction operator/(const Fraction &f1, const Fraction &f2)
    {
        int a = f1.numerator * f2.denominator;
        int b = f2.numerator * f1.denominator;

        return Fraction(a, b);
    }

    bool operator==(const Fraction &f1, const Fraction &f2)
    {
        int a = f2.denominator * f1.numerator;
        int b = f1.denominator * f2.numerator;
        return a == b;
    }
    int main(int argc, const char **argv)
    {
        Fraction f1(3, 4);
        Fraction f2(5, 8);
        Fraction f3 = (-f2);
        cout << f2.getValue() << endl;
        cout << f3.getValue() << endl;
        cout << (f1 == f1) << endl;
        Fraction f4 = (f1 * f2);
        Fraction f5 = (f1 / f2);

        cout << f4.getValue() << endl;
        cout << f5.getValue() << endl;
        return 0;
    }