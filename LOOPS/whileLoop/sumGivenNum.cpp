#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cout<<"Enter numer :";
    cin>>num;
    while(num>0){
        int lastDigit = num%10;
        sum = sum+lastDigit;
        num = num/10;
    }
    cout<<"Sum of given number :"<<sum;

    return 0;
}