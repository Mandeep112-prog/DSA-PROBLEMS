#include<iostream>
using namespace std;
class Base {
    public:
    virtual void print(){
        cout<<"Base class\n";
    }
};

class Derived : public Base{
    public:
    void print(){
        cout<<"Derived class\n";
    }
};

int main(){
    Base *b = new Derived(); // base class ke sath pointer sath hmne yaha ek Derived class ka object create kiya aor fir b pinter se print fnx ko call kr diya then b ko v deallocate v kr diya
    b->print();
    delete b;
    return 0;
}