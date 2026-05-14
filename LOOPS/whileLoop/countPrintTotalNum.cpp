#include<iostream>
using namespace std;

int main(){
    int num;
    int count=0;
    cout<<"Enter number :";
    cin>>num;
    cout<<"All digits are :";
    while(num>0){
        int digit = num%10;
        cout<<digit<<" ";
        num = num/10;
        count++;
    }
    cout<<endl;
    cout<<"No of digits :"<<count;
    return 0;
}