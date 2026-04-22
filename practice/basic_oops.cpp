#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int rollNo;

    void getName(){
        cout<<"Name :"<<name<<endl;
    }

    void getRollNo(){
        cout<<"Roll no :"<<rollNo;
    }
};

int main(){
    student s1;
    s1.name = "Sandeep";
    s1.rollNo=230280001;
    s1.getName();
    s1.getRollNo();
    return 0;
}