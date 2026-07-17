#include<iostream>
using namespace std;
class Animal {
    public:
    string color;
    void eat(){
        cout<<"eating...";
    }
    void breadthing(){
        cout<<"Breadthing...";
    }
};
class Fish : public Animal {
    public:
    void swim(){
        cout<<"swiming..."<<endl;
        }
};
int main(){
    Fish f1;
    f1.swim();
    f1.eat();
    return 0;
}