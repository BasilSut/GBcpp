#include "robot.h"
#include "exceptions.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

robot::robot(){
    loc.x = 0;
    loc.y = 0;
    loc.direction = "UP";
};
robot::robot(usint a, usint b)
{
    
    while (a > 9 && b >9){
        throw OffTheField(this);
    }
        loc.x = a;
        loc.y = b;
        loc.direction = "UP";
    }
    void robot::move()
    {
        if(loc.direction=="UP"){
            if ((loc.y + 1) > 9)
                throw OffTheField(this);
            else
                loc.y++;
        }else if (loc.direction == "DOWN"){
            if ((loc.y - 1) > 9)
                throw OffTheField(this);
            else
                loc.y--;
        }else if(loc.direction == "LEFT"){
            if ((loc.x - 1) > 9)
                throw OffTheField(this);
            else
                loc.x--;
        }else if (loc.direction == "RIGHT"){
            if ((loc.x + 1) > 9)
                throw OffTheField(this);
            else
                loc.x++;
        }
    }
    void robot::rotate(){
        cout<<"input diraction \nw == UP \ns == DOWN \nd == RIGHT\na == LEFT:"<<endl;
        char rot = 'o';
        while (rot != 'w' && rot != 's' && rot != 'd' && rot != 'a'){
            cin >> rot;
        }   
        switch (rot)
        {
        case 'w':
            loc.direction = "UP";
            break;
        case 's':
            loc.direction = "DOWN";
            break;
        case 'd':
            loc.direction = "RIGHT";
            break;
        case 'a':
            loc.direction = "LEFT";
            break;
        default:
            break;
        }
    }
     void robot::print_details()
    {
        cout << "position: \t x = "<<loc.x <<"\n\t y = "<<loc.y  <<"\ndiraction is \t"<<loc.direction<<endl;
    }