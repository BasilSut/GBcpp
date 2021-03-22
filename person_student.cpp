#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Person{
protected:
    string name;
    int age;
    char sex;
    float weight;
public:

    Person(string n):name(n){}
    Person(string n, int a, char s, float w)
    :name(n), age(a),sex(s),weight(w){
    }
    void set_name(string n){
        this->name = n;
    }
    void set_age(int a){
        age = a;
    }
    void set_weight(float w){
        weight = w;
    }
};

class Student : public Person{
private:
    static int count_stu;
    int year_of_study;
public:
    Student(string n):Person(n){count_stu++;};
    Student(string n, int a, char s, float w, int y)
                     :Person(n,a,s,y),year_of_study(y){
        count_stu++;
    };
    ~Student(){
        count_stu--;
    };
    static int getCount_Stu(){
        return count_stu;
    }


};
int Student::count_stu=0;

int main(int argc, const char* argv[]){
    Student Lublina("Irina",19,'w',56.5, 2);
    Student Petrov("Ivan",18,'m',64.6, 1);
    cout<<Petrov.getCount_Stu()<<endl;
    
    return 0;
}