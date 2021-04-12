#include "exceptions.h"

OffTheField::OffTheField(const robot &x_y)
{
    xyd = x_y;
    //x_y.print_details();
};
/*std::ostream &operator<<(std::ostream &out, const OffTheField &point){
    std::cout << "position: \t x = " << point.xyd.loc.x << "\n\t y = " << loc.y << "\ndiraction is \t" << loc.direction << endl;
}*/
/*
IllegalCommand::IllegalCommand(location &x_y){

};
*/