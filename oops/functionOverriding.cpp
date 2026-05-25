//it is runtime polymorphism : there are two classes and they have own its function with same name show() then which funtion will call it will be decide at the runtime then child function will override the parent child function
#include<iostream>
using namespace std;
class Parent {
    public:
    void show(){
        cout<<"Parent class showing......";
    }
};
class Child {
    public :
    void show(){
        cout<<"Child class showing......";
    }
};

int main(){
    Child c1;
    c1.show();
    return 0;
}