#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the N number :";
    cin>>num;
    int i = 1;
    int sum=0;
    cout<<"Sum of First "<<num<<" numbers :";
    while(num>=i){
        sum+=i;
        i++;
    }
    cout<<sum;

    return 0;
}