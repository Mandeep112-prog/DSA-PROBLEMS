#include<iostream>
using namespace std;
class Complex {
    int real;
    int imaginary;
    public:
    Complex(int real, int imaginary){
       this->real = real;
       this->imaginary = imaginary;
    }

    void showNum(){
        cout<<real<<"+"<<imaginary<<"i\n";
    }

    void operator + (Complex &c2){
        int resReal = this->real + c2.real;
        int resImaginary = this->imaginary + c2.imaginary;
        Complex c3(resReal,resImaginary);
        cout<<"Result :";
        c3.showNum();
    }
};

int main(){
    Complex c1(2,4);
    Complex c2(1,3);
    c1.showNum();
    c2.showNum();
    c1+c2;

    return 0;
}