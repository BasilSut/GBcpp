#pragma once
#include <string>
using std::string;
typedef unsigned short int usint;
struct location
{
    usint x;
    usint y;
    string direction; //
};

class robot
{
protected:
    struct location loc;

public:
    robot(){};
    robot(usint a, usint b){};

    void move();
    void rotate();
    void print_details();
};