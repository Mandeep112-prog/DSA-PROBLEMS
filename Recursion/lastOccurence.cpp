#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int>arr, int target, int i){
    if(i == arr.size()){
        return -1;
    }

    int idxFound = lastOccurence(arr, target, i+1);
    if(idxFound == -1){
        if(arr[i] == target){
            return i;
        }
    }

    return idxFound;

}

int main(){
    vector<int>arr = {1,2,3,4,5,5,5,6};
    cout<<lastOccurence(arr,5,0);
    return 0;
}