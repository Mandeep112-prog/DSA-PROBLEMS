#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int count = 0;
    cout<<"All digits are :";
    while(num>0){
        int lastDigit = num%10;
        cout<<lastDigit<<" ";
        num = num/10;
        count++;
    }
    cout<<endl;
    cout<<"No of digit :"<<count;
    return 0;
}