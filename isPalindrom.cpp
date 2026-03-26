#include<iostream>
#include<cString>
using namespace std;

bool isPalindrome(char word[], int n){
   int st=0, end=n-1;
   while(st<end){
    if(word[st++]!=word[end--]){
        cout<<"Palindrome is not valid";
        return false;
    }
   }
   cout<<"it is valid palindrome";
   return true;
}
int main(){
    char word[]="racecar";
    isPalindrome(word, strlen(word));
    return 0;
}