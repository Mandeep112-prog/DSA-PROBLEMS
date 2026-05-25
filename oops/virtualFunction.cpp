#include<iostream>
using namespace std;
class Parent {
    public:
    virtual void show(){
        cout<<"parent class called...";
    }
};
class Child : public Parent{
    public:
    void show(){
        cout<<"child class called...";
    }
};

int main(){
    Child child1;
    Parent *ptr;
    ptr = &child1;
    ptr->show();

    return 0;
}