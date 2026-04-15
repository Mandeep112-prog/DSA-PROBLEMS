#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int>arr, int target){
    int st=0, end=arr.size()-1;
    int currSum = 0;
    vector<int>ans;
    
    while(st<end){
        if(currSum == target){
            ans.push_back(st);
            ans.push_back(end);
            break;

        }
        else if(currSum>target){
            end--;
        }
        else{
            st++;
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {2,7,11,15};
    int target = 9;
    vector<int>ans = pairSum(arr,target);
    if(ans.size()>0){
    cout<<ans[0]<<","<<ans[1];
    }
    else{
        cout<<"No pair found"<<endl;
    }
    return 0;
}