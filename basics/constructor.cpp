#include<iostream>
using namespace std;

class Car{
    string name;
    string color;
    public:
    Car(string name, string color){
        this->name=name;//this pointer pointer point to the current object means c1
        this->color=color;
    }
    string getName(){
        cout<<"Car name :"<<name;
    }
};

int main(){
    Car c1("maruti 800","red");
    c1.getName();
    return 0;
}