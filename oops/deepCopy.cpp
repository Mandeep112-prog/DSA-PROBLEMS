#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    //parametrized constructor
    Car(string nameVal, string colorVal, int milVal){
        name = nameVal;
        color = colorVal;
        mileage = new int;
        *mileage = milVal;
    }

    //copy constructor (deep copy) - both objects get different memory addresses in the heap.
    Car(Car &original){
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *(original.mileage);

    }

    void display() {
        cout << "Car Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Mileage: " << *mileage << endl;
    }

     ~Car() {
        delete mileage;
    }
};

int main(){
    Car c1("HondaCity","white", 25);

    Car c2(c1);//copy constructor

    cout<<"For object c1"<<endl;
    c1.display();

    cout<<"--------------------"<<endl;

    cout<<"For object c2"<<endl;
    c2.display();
    return 0;
}