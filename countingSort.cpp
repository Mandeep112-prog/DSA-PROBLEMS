#include<iostream>
#include <climits>
using namespace std;

void countSort(int arr[] , int n){
    int freq[100000]={0};
    int minVal = INT_MAX, maxVal = INT_MIN;
    //for range minimum and maximum
    for(int i=0; i<n;i++){
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    //1st step
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //2nd step
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}

void printArr(int arr[], int n){
    cout<<"Sorted elements are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    countSort(arr,n);
    printArr(arr,n);
    return 0;
}