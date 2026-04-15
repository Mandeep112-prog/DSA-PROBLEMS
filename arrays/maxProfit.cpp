#include<iostream>
#include<climits>
using namespace std;

// Time Complexity O(n) also Space Complexity O(n)
// void maxProfit(int prices[], int n){
//     int bestbuy[10000];
//     bestbuy[0]= INT_MAX;

//     for(int i=1; i<n; i++){
//         bestbuy[i]=min(prices[i-1], bestbuy[i-1]);
//     }

//     int maxProfit=0;
//     for(int i=0; i<n; i++){
//         int currProfit = prices[i]-bestbuy[i];
//         maxProfit=max(currProfit,maxProfit);
//     }
//     cout<<maxProfit<<endl;
// }


// Time Complexity O(n) but space complexity O(1)
void maxProfit(int prices[], int n){
    int minprice = INT_MAX;
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        minprice = min(minprice, prices[i]);
        maxProfit= max(maxProfit, prices[i]-minprice);
    }
    cout<<"Maximum profit :"<<maxProfit;
}

int main(){
    int prices[]={7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
    return 0;
}