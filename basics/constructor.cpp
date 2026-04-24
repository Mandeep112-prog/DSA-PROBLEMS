#include<iostream>
using namespace std;

class Car{
    string name;
    string color;
    public:
    Car(){
        cout<<"without parameter"<<endl;
    }
    Car(string nameVal, string colorVal){
        name=nameVal;
        color=colorVal;
    }
    string getName(){
        cout<<"Car name :"<<name<<endl;
    }
};

int main(){
    Car c0;
    Car c1("maruti 800","red");
    Car c2("honda","white");
    c1.getName();
    c2.getName();
    return 0;
}