// Tc =O(n)
#include<iostream>
#include<climits>
using namespace std;

void MaxSubArraySum(int arr[], int n){
    int maxsum = INT_MIN;
    int currsum = 0;
    for(int i=0; i<n; i++){
        currsum += arr[i];
        maxsum = max(currsum, maxsum);

        if(currsum<0){
            currsum = 0;
        }
    }
    cout<<"Maximum subarray sum :"<<maxsum<<endl;

}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    MaxSubArraySum(arr,n);
    return 0;
}