// linear search problem
#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"Element found at index:"<<i<<endl;
        }
    }
}

int main(){
    int arr[]={10,9,12,3,5,7,4,1};
    int n = sizeof(arr)/sizeof(int);
    int key=10;
    linearSearch(arr,n,key);
    return 0;
}