#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArr(int arr[], int n){
      cout<<"After sorting array are :";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<",";
        }
}
int main(){
    int arr[]={5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Before sorting array are :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    BubbleSort(arr,n);
    printArr(arr,n);
    return 0;
}