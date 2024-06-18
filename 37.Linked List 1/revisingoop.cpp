#include<iostream>
using namespace std;

class Student{  // user defined Data type
public:
    string name;
    int age;
    float per;

    Student(string name,int a ,float p){  //constructor
        this->name = name;  // this calls class variable
        // (*this).name = name;
        age = a;
        per = p;
    }
};

void change(Student* s){
    s->name = "change ho gya";
}

int main(){
    //Student s1;   //obj
    // s1.name = "mitra";
    // cout<<s1.name;

    // Student s2("mitra",20,92.6);
    // cout<<s2.name;

    // Student s3("mitra",20,92.6);
    // cout<<s3.name<<"\n";
    // Student* ptr = &s3;
    // // (*ptr).name = "saumitra";
    // ptr->name = "mitram";    //same thing!
    // cout<<s3.name;

    // Student s4("mitra",20,92.6);
    // cout<<s4.name<<"\n";
    // change(&s4);
    // cout<<s4.name<<"\n";

    Student* s = new Student("mitra",20,92.6);
    cout<<s->name<<"\n";
    change(s);
    cout<<s->name<<"\n";

}