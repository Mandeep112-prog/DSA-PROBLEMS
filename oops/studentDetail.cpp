#include<iostream>
using namespace std;

class Person {
    protected :
    string name;
    int age;
    public:
    Person(string n, int a){
        name = n;
        age = a;
    }
};

class Student : public Person{
    private:
    string StudentID;

    public:
    Student(string n, int a, string ID) : Person(n,a){
        StudentID = ID;
    }

    void displayDetail(){
        cout<<"Student ID :"<<StudentID<<endl;
        cout<<"Student name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        
    }
};
  
int main(){
    Student student("Mandeep", 20, "M123456");
    Student student1("Shubham", 22, "S856974");
    student.displayDetail();
    cout<<"-------------------------------\n";
    student1.displayDetail();
    return 0;
}