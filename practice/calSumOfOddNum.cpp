#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int sum = 0;
    int i = 0;
    while(num>=i){
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of upto N odd number :"<<sum;
    return 0;
}