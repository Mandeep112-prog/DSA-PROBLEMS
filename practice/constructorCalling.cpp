#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"Constructor Parent\n";
    }
    ~Parent(){
        cout<<"Destructor Parent\n";
    }
};

class Child : public Parent{
    public:
    Child(){
        cout<<"Constructor Child\n";
    }
    ~Child(){
        cout<<"Destructor Child\n";
    }
};

int main(){
    Child Child1;

    return 0;
}