//calculate sum of first 1 to N odd numbers....

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter N odd number to calculate sum :";
    cin>>num;
    int sum=0;
    int i=0;
    cout<<"Sum of 1 to "<<num<< " odd numbers :";
    while(num>=i){
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<sum;

    return 0;
}