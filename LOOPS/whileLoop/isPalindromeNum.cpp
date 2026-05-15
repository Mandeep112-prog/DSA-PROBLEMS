#include<iostream>
using namespace std;

int main(){
    int num = 12321;
    int originalNum = num;
    int reverse = 0;
    while(num>0){
        int lastDigit = num%10;
        reverse = reverse*10+lastDigit;
        num = num/10;
    }
    if(reverse == originalNum){
        cout<<"Yes, this is palindrome number!";
    }
    else{
        cout<<"No, this is not palindrome number!";
    }
    return 0;
}