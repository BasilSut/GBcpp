#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;



bool isInt( string Str_ptr) {
  for( int i = 0; i < Str_ptr.length(); i++ ) {
        if (!isdigit (Str_ptr[i])&& (Str_ptr[0] != '-') && (Str_ptr[0] != '+') ) {
            cout<<"it isn't an integer number, please try again: \n";
            return false;
        }
    }
    return true;
}



int main(int argc, const char** argv){
    string value;
    while(1){
        cout<<"input an integer number:";
        std::getline(cin,value);
        if (isInt(value)){
            long int x = std::stol(value);
                if(x<2147483647&& x>-2147483648){
                    cout<<"thanks, input is correct\n";
                    break;
                }else
                    cout<<"this is a long integer, please input an integer number again:\n";//cout<<"x="<<x<<endl;

        }   
    } 
    return 0;
}