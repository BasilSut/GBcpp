
/*
Создать класс Car (автомобиль) с полями company (компания) и model (модель). 
Классы-наследники: PassengerCar (легковой автомобиль) и Bus (автобус). 
От этих классов наследует класс Minivan (минивэн). 
Создать конструкторы для каждого из классов, чтобы они выводили данные о классах. 
Создать объекты для каждого из классов и посмотреть, в какой последовательности выполняются конструкторы. 
Обратить внимание на проблему «алмаз смерти». 
*/
#include <iostream>
#include <string>
using namespace std;

class Car
{
protected:
    string company;
    string model;

public:
    Car(string c, string m) : company(c), model(m)
    {
        cout << c << endl
             << m << endl;
    }
    ~Car() {}
};
class Bus : virtual public Car
{
public:
    Bus(string c, string m, string b) : Car(c, m)
    {
        cout << "Bus: " << b << endl;
    }
};

class PassengerCar : virtual public Car
{
public:
    PassengerCar(string c, string m, string p) : Car(c, m)
    {
        cout << "Passenger car: " << p << endl;
    }
};


class Minivan : public PassengerCar, public Bus
{
public:
    Minivan(string c, string m, string p, string b) : PassengerCar(c, m, p), Bus(c, m, b), Car(c, m) {}
};
int main(int argc, const char **argv)
{
    Minivan *Min1 = new Minivan("BMV", "Model: ", "GT 5", "first");

    Bus *Bus1 = new Bus("BMV", "Model: ",  "second");


    delete Min1;
    delete Bus1;
    return 0;
}