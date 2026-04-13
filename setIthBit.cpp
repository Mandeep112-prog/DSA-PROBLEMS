#include<iostream>
using namespace std;

int setIthBit(int num, int i){
    int bitmask = 1<<i;
    cout<<(bitmask | num);
}

int main(){
    setIthBit(5,1);
    return 0;

}