#include <iostream>
using std::cout;

class Power{
    float x, p;
public:
    Power():x(0),p(0){
    }
    ~Power(){
    } 
    void set(float xf, float pf){
    x=xf; p=pf;
    }
    float calculate(){
        float xi=x, x_pow_p=x; 
         
        //int pff=(int)p;
        //cout << pff <<"\n";
        if(p==0){
                x_pow_p=1;
                cout << x_pow_p<<"\n";
                return x_pow_p;
       } else if(p>0) {
            for(int i=1;i<p;i++){  
                x_pow_p*=xi;
            }  
          cout << x_pow_p;
          return x_pow_p;
         }else if(p<0){
             for(int i=1;i<p;i++){  
                x_pow_p*=xi;
            }  
          cout << (1/x_pow_p);
          return (1/x_pow_p);
         }
    } 
};
    
int main(){
	    Power Be;
    Be.set(2,-2);
    Be.calculate();
	return 0;
}
    
