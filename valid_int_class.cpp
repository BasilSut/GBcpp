#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class is_int{
public:
    is_int(string Str_ptr):m_str(Str_ptr){
        check();
    };
private:
    string m_str;

    bool isInt( string Str_ptr) {
        for( int i = 0; i < m_str.length(); i++ ) {
            if (!isdigit (m_str[i])&& (m_str[0] != '-') && (m_str[0] != '+') ) {
                cout<<"it isn't an integer number, please try again: \n";
                return false;
            }
        }
    return true;
    }
    void check(){
        while(1){
            cout<<"input an integer number:";
            std::getline(cin,m_str);
            if (isInt(m_str)){
                long int x = std::stol(m_str);
                    if(x<2147483647&& x>-2147483648){
                        cout<<"thanks, input is correct\n";
                        break;
                    }else
                        cout<<"this is a long integer, please input an integer number again:\n";//cout<<"x="<<x<<endl;

            }   
        } 
    }
};


int main(int argc, const char** argv){
    string value1;
    is_int input_1(value1);

    

    return 0;
}