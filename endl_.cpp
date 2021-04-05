#include <iostream>
 using std::cout; using std::ostream;
ostream &endl(ostream &os)
{
    os.put(os.widen('\n'));
    os.put(os.widen('\n'));
    os.flush();
    return os;
}

int main()
{   int x=1,y=2;
    cout <<x<<endl<<y;
 
    return 0;
}