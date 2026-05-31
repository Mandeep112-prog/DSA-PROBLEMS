// find which targeted element find first in the array ->  first occurence {1,2,3,4,4,4,5} target = 4; ->index : 3

#include<iostream>
#include<vector>
using namespace std;

int FirstOccurence(vector<int>arr, int i, int target){
    if(i == arr.size()){
        return -1;
    }

    if(arr[i] == target){
        cout<<"index :";
        return i;
    }

    return FirstOccurence(arr, i+1,target);
}

int main(){
    vector<int>arr = {1,2,3,4,4,4,5};
    cout<<FirstOccurence(arr,0,4);
    return 0;
}