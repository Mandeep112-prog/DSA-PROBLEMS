#include<iostream>
using namespace std;

int main(){
    int num = 12345;
    int product=1;
    while(num>0){
        int digit = num%10;
        product *= digit;
        num /= 10;
    }

    cout<<"Product of given number :"<<product;

    return 0;
}