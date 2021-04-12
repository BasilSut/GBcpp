#pragma once
#include <iostream>
#include "robot.h"

class OffTheField
{
    robot xyd;
public:
    OffTheField(const robot &x_y);

    friend std::ostream &operator<<(std::ostream &out, const OffTheField &point);
};
/*
class IllegalCommand(robot &x_y){

};
*/