#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    Student(){
        name = "Mandeep";
        roll = 230214145;
    }
};
class Teacher{
    public:
    string TeacherName;
    string Department;
    Teacher(){
        TeacherName = "Manoj sir";
        Department = "Computer Science Engineering";
    }
};

class Show : public Student , public Teacher{
    public:
    void  display(){
        cout<<"Stuent details :\n";
        cout<<"Student name :"<<name<<endl;
        cout<<"Roll no :"<<roll<<endl;
        cout<<"--------------------------\n";
        cout<<"Teacher details\n";
        cout<<"Teacher name :"<<TeacherName<<endl;
        cout<<"Deparment :"<<Department<<endl;
    }
};
int main(){
    Show s1;
    s1.display();
    return 0;
}