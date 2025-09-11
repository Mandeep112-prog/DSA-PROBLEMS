#include<iostream>
using namespace std;

int  BinarySearch(int arr[], int n, int key){
    int st=0;
    int end=n-1;
    int mid = st + (end - st) / 2;
    
    while(st<=end){
        if(key==arr[mid]){
            cout<<"element found at index :"<<mid;
            return mid;
        }
        else if(key>arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
        }

    }

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n= sizeof(arr)/sizeof(int);
    int key=10;
    BinarySearch(arr,n,key);
    return 0;
    
}