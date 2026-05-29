#include<iostream>
using namespace std;

void reverseNum(int n){

    if(n == 0){
        return ;
    }
    cout<<n<<" ";
    reverseNum(n-1);
}

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"Reverse :";
    reverseNum(num);
    return 0;
}