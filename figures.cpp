#include <iostream>
#include <math.h>
using namespace std;

class Figure{
public:
    Figure() { cout << "Figure" << endl; }
    virtual double area(double x, double y) = 0;

};
class Parallelogram : public Figure{
public:
    Parallelogram(){
        cout << "Parallelogram" << endl;
    }
    double area(double ha, double a) override{
        return (a*ha);
    }
};

class Rectangle  : public Parallelogram{
public:
    Rectangle() { cout << "Rectangle" << endl; }
    double area(double a, double b) override
    {
        return (a * b);
    }
};

class Square   : public Parallelogram{
public:
    Square() { cout << "Square" << endl; }

    double area(double a, double a2) override //a =a2
    {
        return (a * a);
}
};
class Rhombus   : public Parallelogram{
public:
    Rhombus() { cout << "Rhombus" << endl; }
    double area(double d1, double d2) override
    {
        return (0.5*d1 * d2);
    }
};


class Circle : public Figure{
public:
    Circle() { cout << "Circle" << endl; }

    double area(double r,double r1) override //r =r2
    {
        return (2 * M_PI * r * r);
    }
};



int main(int argc, char ** argv){
    Circle a;
    cout << a.area(5,5);
    return 0;
}