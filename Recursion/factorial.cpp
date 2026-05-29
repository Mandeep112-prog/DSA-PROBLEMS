#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter a number for factorial :";
    cin>>num;
    int ans = factorial(num);
    cout<<"Factorial of "<<num << " = "<<ans;
    return 0;
}