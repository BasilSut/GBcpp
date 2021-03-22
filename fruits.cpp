#include <iostream>
#include <string>
using namespace std;



class Fruit{
protected:
    string name;
    string colour;

public:
    Fruit(string N, string C):name(N),colour(C){}
    
    string getName(){
        return name;
    }
    string getColor(){
        return colour;
    }
};

class Apple : public Fruit{
protected:
    string m_apple = "apple";

public:
    Apple(string c):Fruit(m_apple,c){
    }
    Apple(string name, string c2):Fruit(name,c2){
    }
    string getName()  {
        return name;
    }
    string getColor()  {
        return colour;
    }
};


class Banana : public Fruit{
protected:
   string m_banana = "banana";
public:
    Banana():Fruit(m_banana,"yellow"){ }

    //Banana(string c):Fruit(m_banana,c){ }

    string getName() {
        return name;
    }
    string getColor()  {
        return colour;
    }
};


class GrannySmith : public Apple{
protected:
    string GrannySmith_name = "Granny Smith apple";
    string Gr_colour = "green";

public:
  
    GrannySmith(): Apple(GrannySmith_name,Gr_colour){ }

    string getName()  {
        return name;
    }
    string getColor(){
        return colour;
    }
};

int main(int argc, const char* argv[]){

    Apple a("red");
    //Banana b;
    //GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
  /*  std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
*/
    return 0;
}