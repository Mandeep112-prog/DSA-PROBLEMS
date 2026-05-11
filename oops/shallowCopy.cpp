#include<iostream>
using namespace std;
class Bike{
    public:
    string BikeName;
    string color;
    int *milege;
//it is a parametrized constructor
    Bike(string BikeName, string color, int mil){
        this->BikeName=BikeName;
        this->color=color;
        milege = new int;
       *milege = mil;
    }
    //it is a shallow copy - it only stores referrence of other object (for dynamic memory)pointer point to the same memory
    Bike(Bike &original){
        BikeName = original.BikeName;
        color = original.color;
        milege = original.milege;
    }

    void Display(){
        cout<<"Bike name :"<<BikeName<<endl;
        cout<<"Color :"<<color<<endl;
        cout<<"Milege :"<<*milege<<endl;
    }
};

int main(){
    Bike b1("Splender", "Black",50);

    Bike b2(b1);//shallow copy

    //for object b1
    cout<<"object b1 :"<<endl;
    b1.Display();

    cout<<"-------------------------------------"<<endl;

    //for object b2
    cout<<"object b2 :"<<endl;
    b2.Display();

    return 0;

}