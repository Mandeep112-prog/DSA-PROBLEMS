#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char word[], int n ){
    int st=0, end=n-1;
    while(st<end){
        if(word[st]!=word[end]){
            cout<<"not valid palindrome";
            return false;
        }
        st++;
        end--;
    }
    cout<<"valid palindrome";
    return true;
}

int main(){
    char word[] ="madam";
    isPalindrome(word, strlen(word));
    return 0;
}