#include<iostream>
using namespace std;

void EvenOdd(int num){
    if(!(num&1)){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
}

int main(){
    EvenOdd(5);
    cout<<endl;
    EvenOdd(4);
    return 0;

}