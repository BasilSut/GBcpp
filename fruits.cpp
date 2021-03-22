#include <iostream>
#include <string>
using namespace std; 

class Fruit {
protected:
    string name;
    string color;
public:
    Fruit(string n, string c) : name(n), color(c) {}
    string getname() const {
          return name;
    }
    string getcolor() const {
             return color;
    }
};

class Apple : public Fruit {
protected:

public:
    Apple(string color) : Fruit("apple", color) {}
};

class Banana : public Fruit {
public:
    Banana() : Fruit("banana", "yellow") {}
};
class GrannySmith : public Apple {
public:
    GrannySmith() :Apple("green") {
        name= "Granny Smith apple";

    }
};

int main(int argc, const char** argv){
    Apple a("red");
    Banana b;
    GrannySmith c;
    cout << "My " << a.getname() << " is " << a.getcolor() << endl;
    cout << "My " << b.getname() << " is " << b.getcolor() << endl;
    cout << "My " << c.getname() << " is " << c.getcolor() << endl;
    return 0;
}