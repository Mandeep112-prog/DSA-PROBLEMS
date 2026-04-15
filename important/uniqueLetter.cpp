#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter string :";
    cin>>str;
    int freq[26]={0};
    for(int i=0; i<str.length(); i++){
        str[i]=tolower(str[i]);
        freq[str[i]-'a']++;
    }

    for(int i=0; i<str.length(); i++){
        if(freq[str[i]-'a']==1){
            cout<<"first non-repeating letter :";
            cout<<str[i];
            return 0;
        }
    }
    cout<<"no unique letter ";
    return 0;
}