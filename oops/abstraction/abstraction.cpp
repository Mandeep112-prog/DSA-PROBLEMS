#include<iostream>
using namespace std;
//abstract class
class Shape {
    public:
    virtual void draw() = 0; //pure virtual fnx, abstract fnx
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"draw circle \n";
    }
};

class Rectangle : public Shape {
    public:
    void draw(){
        cout<<"draw rectanle \n";
    }
};

int main(){
    Circle c1;
    c1.draw();

    Rectangle r1;
    r1.draw();

    // Shape s1; abstract class cannot be instantiated
    // s1.draw();

    return 0;
}