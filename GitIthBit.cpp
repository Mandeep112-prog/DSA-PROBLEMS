#include<iostream>
using namespace std;

int gitIthBit(int num , int i){
    int bitmask = 1<<i;
    if(!(num&bitmask)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    cout<<gitIthBit(5,2);
    cout<<endl;
    cout<<gitIthBit(4,0);
    return 0;
}