#include<iostream>
using namespace std;

class Car{
    string name;
    string color;
    public:
    Car(string nameVal, string colorVal){
        name=nameVal;
        color=colorVal;
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