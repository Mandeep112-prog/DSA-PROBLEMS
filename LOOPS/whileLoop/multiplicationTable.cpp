// print the multiplication table of a given numbers from n*1 to n*10

#include<iostream>
using namespace std;

int main(){
    int num;
    int i = 1;
    cout<<"Enter a number for a table :";
    cin>>num;
    cout<<"Table of "<<num<<" :\n";
    while(10>=i){
        cout<<num*i<<endl;
        i++;
    }
    return 0;
}