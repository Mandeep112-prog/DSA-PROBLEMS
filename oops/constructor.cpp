#include<iostream>
using namespace std;

class Employee{
    public:
    string EmpName;
    string Department;
    int salary;

    //Default constructor
    Employee(){
        cout<<"Default constructor called"<<endl;
    }
    //Parametrized constructor
    Employee(string EmpName, string Department, int salary){
        this->EmpName = EmpName;
        this->Department = Department;
        this->salary = salary;
    }

    void getEmpDetail(){
        cout<<"Employee Name :"<<EmpName<<endl;
        cout<<"Department :"<<Department<<"\n"<<"Salary"<<salary<<endl;
    }
};

int main(){
    Employee E1;//Object E1 - called Default constructor
    Employee E2("Mandeep","Software Engineer", 100000);//Object E2 - called Parametrized constructor
    Employee E3(E2);//Object E3 -  copy constructor - Object E2 passed to the Object E3
    E3.getEmpDetail();

    return 0;
}