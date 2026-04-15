#include<iostream>
using namespace std;

void findGrstNum(int arr[], int n){
    int max =arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The greatest number:"<<max;

}

int main(){
    int arr[]={7,1,4,3,5,2};
    int n = sizeof(arr)/sizeof(int);
    findGrstNum(arr,n);
    return 0;
}