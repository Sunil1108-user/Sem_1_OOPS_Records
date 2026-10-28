#include<iostream>
using namespace std;
class Student{
    private:
    int roll_no;
    string name;
    float mark;
    public:
    Student(int r,string n,float m){
        roll_no=r;
        name=n;
        mark=m;
        cout<<"Student Object Created"<< endl;
    }
    void display(){
        cout<<"Roll No.:"<<roll_no<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Mark:"<<mark<<endl;
    }
    ~Student(){
        cout<<"Object Destroyed"<<endl;  }
};
int main(){
    Student s(101,"Arun",78.9);
    s.display();
    return 0;
}