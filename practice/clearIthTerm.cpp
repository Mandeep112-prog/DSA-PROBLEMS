// using Bitwise operator 
#include<iostream>
using namespace std;

void clearIthTerm(int num, int i){
    int bitmask = ~(1<<i);
    cout<< (num & bitmask);
}
int main(){
    clearIthTerm(7,1);
    return 0;

}