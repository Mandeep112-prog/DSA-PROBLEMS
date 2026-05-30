#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            cout<<"Array is not sorted!";
            return false;
        }
        
    }
    cout<<"Array is sorted! ";
    return true;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(arr)/sizeof(int);
  isSorted(arr,n);

    return 0;
}