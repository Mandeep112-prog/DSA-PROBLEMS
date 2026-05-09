// print all even numbers between 1 and 100

#include<iostream>
using namespace std;

int main(){
    int i=1;
    cout<<"Even numbers between 1 and 100 are :";
    while(i<=100){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}