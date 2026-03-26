#include<iostream>
#include<cString>
using namespace std;

void reverseWord(char word[], int n){
    int st=0, end=n-1;
    while(st<=end){
        swap(word[st],word[end]);
        st++;
        end--;

    }
    for(int i=0; i<n; i++){
        cout<<word[i]<<" ";
    }

}

int main(){
    char word[] = "mandeep";
    reverseWord(word, strlen(word));
    return 0;
}