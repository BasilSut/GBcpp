#include <iostream>
using std::cin;
using std::cerr;
using std::endl;

class Ex{
private:
    double x;
public:
    Ex(double xi):x(xi){}
    ~Ex(){}
    double get_x() { return x; }
};
 
class Bar{
private:
    double y;
public:
    Bar():y(0){ }
    ~Bar(){}
    void set(double a){
        if(y+a>100)
            throw Ex(y * a);
        else
            y = a;
    }   
};
 
int main()
{
    Bar b;
    int x=1;
    while(x!=0){
        cin >> x;
        try{
           
            b.set(x);
        } 
        catch(Ex err)
        {
            cerr << "Exception: y * a  =" << err.get_x() << endl;
        }
    }
}