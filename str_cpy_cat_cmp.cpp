#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //for cpy string function - it will copy str6 value into str5
    char str5[100];
    char str6[100] = "Mandeep yadav";
    strcpy(str5,str6);
    cout<<str5<<endl;

    //for cat string function -  it will cancatenate/join both string in single line
    char str3[100] = "mandeep";
    char str4[100] = "yadav";
    strcat(str3,str4);
    cout<<str3;
    cout<<endl;

    //for cmp string function - it will compare value Output will be - 0 , negative , positive
    char str1[100] = "mandeep";
    char str2[100] = "yadav";
    
    int result = strcmp(str1, str2);

    if(result == 0){
        cout << "Strings are equal";
    }
    else if(result < 0){
        cout << "str1 is smaller than str2";
    }
    else{
        cout << "str1 is greater than str2";
    }

    return 0;
}