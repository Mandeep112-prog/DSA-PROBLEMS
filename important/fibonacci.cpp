// fibonacci series time complexity O(n) 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the term of the fibonacci:";
    cin>>n;
    int a = 0;
    int b = 1;
    int next;
    cout<<"fibinacci series are: ";
    for(int i=0; i<n; i++){
        cout<<a<<" ";
        next = a+b;
        a=b;
        b=next;
    }
    return 0;
}