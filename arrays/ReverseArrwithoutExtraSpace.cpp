// Reverse without using extra space

#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(int);

    int st=0;
    int end=n-1;

    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    printArr(arr,n);
    return 0;
}