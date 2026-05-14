#include<iostream>
using namespace std;

class Car{
    public:
    string carName;
    string color;
    int *mileage;

    //copy constructor
    Car(string carNameVal, string colorVal, int mileageVal){
        carName = carNameVal;
        color = colorVal;
        mileage = new int;
        *mileage = mileageVal;
    }

    //destructor - for deleting mileage from heap memory
    ~Car(){
        cout<<"Destructor called"<<endl;
        if(mileage!=NULL){
            delete mileage;
            mileage = NULL;
        }
    }

};

int main(){
    Car c1("Honda City", "white",25);
    cout<<"Car Name :"<<c1.carName<<endl;
    cout<<"Color :"<<c1.color<<endl;
    cout<<"Mileage :"<<*c1.mileage<<endl;
    return 0;
}