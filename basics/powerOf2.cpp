#include<iostream>
using namespace std;

bool isPowerOf2(int num){
    if(!(num&(num-1))){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<isPowerOf2(4);
    cout<<isPowerOf2(32);
    cout<<isPowerOf2(15);
    cout<<isPowerOf2(21);
     
    return 0;

}