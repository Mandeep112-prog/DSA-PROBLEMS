// google and amazon question 
//if (10) = 0001010 => count = 2;
#include<iostream>
using namespace std;

void countSetBit(int num){
    int count = 0;
    while(num>0){
        int lastDigit = num & 1;
        count += lastDigit;
        num = num>>1;
    }
    cout<<"Count = "<<count<<endl;
}

int main(){
    countSetBit(15);
    return 0;

}