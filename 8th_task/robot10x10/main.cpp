#include <iostream>
#include "exceptions.h"
#include "robot.h"
using std::cerr;
using std:: endl;

int main(){
    try
    {
        robot duck(5, 5);
        duck.print_details();
        duck.move();
        duck.rotate();
    }
    catch(OffTheField err){
        cerr << err << "\nException: out of the fild" << endl;
    }
    return 0;
}