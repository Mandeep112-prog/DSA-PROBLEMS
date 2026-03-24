//Diagonal sum time complexity O{n^2}

#include<iostream>
using namespace std;

int digSum(int mat[][4], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum+=mat[i][j];
            }
            else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }
    cout<<"Sum : "<<sum;
    return sum;
}

int main(){
    int mat[4][4] = {{1,2,3,4},{1,4,7,2},{3,6,9,8},{2,5,8,9}};
    digSum(mat,4);
    return 0;
}