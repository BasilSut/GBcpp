#include <iostream>
#include <cstdint>
using std::cout;
using std::cin;
using std::endl;
using std::uint8_t;

class RGBA{
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;
public:
    RGBA(): m_red(0),
            m_green(0),
            m_blue(0),
            m_alpha(255){};
    RGBA(uint8_t r,uint8_t g,uint8_t b,uint8_t alf): m_red(r),
            m_green(g),
            m_blue(b),
            m_alpha(alf){};
    void print_RGBA(){
        cout<<"m_red = "<<(int)m_red<<endl;
        cout<<"m_green = "<<(int)m_green<<endl;     
        cout<<"m_blue = "<<(int)m_blue<<endl;  
        cout<<"m_alpha = "<<(int)m_alpha<<"\n\n";               
    }
};

int main(int argc, const char **argv){
    RGBA pixel;
    RGBA pixel2(255,255,255,255);
    pixel.print_RGBA();
    pixel2.print_RGBA();
    return 0;
}