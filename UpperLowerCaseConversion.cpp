// To conver character word into UpperCase and LowerCase
#include<iostream>
#include<cstring>
using namespace std;

void toUpperCase(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){
            continue;

        }
        else{
           word[i]  = ch-'a'+'A';
        }
    }
}

void toLowerCase(char word1[], int n){
    for(int i=0; i<n; i++){
        char ch = word1[i];
        if(ch>'a' && ch<'z'){
            continue;
        }
        else{
            word1[i] = ch-'A'+'a';
        }

    }
}

int main(){
     char word[] = "aPPle";
     char word1[] = "MANgo";
     toUpperCase(word, strlen(word));
     toLowerCase(word1, strlen(word1));
     cout<<"Upper case : "<<word<<endl;
     cout<<"Lower case : "<<word1;
    return 0;
}