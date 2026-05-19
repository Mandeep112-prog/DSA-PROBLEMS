#include<iostream>
using namespace std;

class Animal {
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
    void breathe(){
        cout<<"Breathe...\n";
    }
};
class Bird : public Animal{
    public:
    void fly(){
        cout<<"Flying...\n";
    }
};
class Fish : public Animal{
    public:
    void swim(){
        cout<<"Swimming...\n";
    }
};
int main(){
    Bird b1;
    Fish f1;
    b1.eat();
    b1.fly();
    f1.swim();
    f1.breathe();
    return 0;
}