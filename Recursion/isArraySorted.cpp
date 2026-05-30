#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i){
    if(i == n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }

    return isSorted(arr, n, i+1);
}

int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int arr2[] = {1,2,3,4,7,6,5,8,9};
    cout<<isSorted(arr1,9,0)<<endl;
    cout<<isSorted(arr2,9,0);

    return 0;
}