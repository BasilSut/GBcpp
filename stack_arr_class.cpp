#include<iostream>


using std::cout;
using std::cin;
using std::endl;

class Stack{
    int ar_stack[9];
    int head;
public:
    Stack():head(-1){};
    ~Stack(){};
    void reset(){
        for(int i=0; i<(sizeof(ar_stack)/sizeof(int));i++)
            ar_stack[i]=0;
            head =-1;
    }
    bool push(int data){

        if (head < (int)(sizeof(ar_stack)/sizeof(int))){
        
                ar_stack[++head]=data;
            return true;
        }else{
            cout<<"Stack overflow \n";
            return false;
        }
    }
    int pop(){
        if(head !=-1){
            return ar_stack[head--];//first: the value of arr[head] is returned, second: head value is decremented by one
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    void print(){
        if (head==-1) {
            cout<<"() \n";
        }else{
        cout <<"(";
        for(int i=0;i<=head;i++){
            cout<<" "<<ar_stack[i]<<" ";
        }
        cout <<") \n";
        }
    };
};

int main(int argc,const char*argv[]){
    Stack stack;
    stack.reset();
    stack.print();
    
    stack.push(3);
    stack.push(7);
    stack.push(10);
    stack.push(5);

    stack.print();
    
    stack.pop();
    stack.print();
    
    stack.pop();
    stack.pop();
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.print();

    return 0;
}
