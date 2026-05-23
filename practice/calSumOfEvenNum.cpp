#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number (upto N even number cal sum) :";
    cin>>num;
    int sum = 0;
    int i =0;
    while(num>=i){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of upto "<<num<<" even numbers :"<<sum;
    return 0;
}