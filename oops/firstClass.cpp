/*
if class properties are in private then you donot assign any propety value explicitly in 
through the main function/methods it will only access inside the class
*/

#include<iostream>
using namespace std;

class student {
    public :
    string name;
    int cgpa;

    void studentName(){
        cout<<"Name :"<<name<<endl;
    }

    void getPercentage(){
        cout<<"Percentage :"<<cgpa;
    }
};

int main(){
    student s1;
    s1.name = "Mandeep";
    s1.cgpa = 9.1;
    s1.studentName();
    s1.getPercentage();
    return 0;
}