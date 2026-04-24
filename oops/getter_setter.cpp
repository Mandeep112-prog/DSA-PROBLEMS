#include<iostream>
#include<cstring>

using namespace std;

class student{
    // we donot access private properties in the main function  - 
    // for access private properties then we use getter and setter mathod 
    string name;
    int Cgpa;

    public:
    //setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setCgpa(int cgpaVal){
        Cgpa = cgpaVal;
    }

    //getters
    void getName(){
        cout<<"Name :"<<name<<endl;
    }
    void getCgpa(){
        cout<<"Cgpa :"<<Cgpa;
    }
};

int main(){
    student s1;
    s1.setName("Mandeep");
    s1.setCgpa(9.1);
    s1.getName();
    s1.getCgpa();
    return 0;

}