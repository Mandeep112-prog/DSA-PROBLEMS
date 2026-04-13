// //approach 1 : brute force approach time complexity O(n*m)
// #include<iostream>
// using namespace std;

// int linearSearch(int mat[][4], int n, int key){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(mat[i][j] == key){
//                 cout<<"Element found at index : "<<"row : "<<i<<" "<<"column : "<<j;
//             }
//         }
//     }
//     cout<<"Element not found";
//     return -1;
// }

// int main(){
//     int mat[4][4] = {{5,10,15,20},{7,14,21,28},{10,20,30,40},{15,30,45,60}};
//     int key = 100;
//     linearSearch(mat,4,key);
//     return 0;
// }



//best approach : stairecase time complexity O(n+m)
#include<iostream>
using namespace std;

bool Search(int mat[][4],int n, int m, int key){
    int i=0, j=m-1;
    while(i<n && j>=0){
        if(key == mat[i][j]){
            cout<<"Key found at index : "<<"row : "<<i<<" "<<"column : "<<j;
            return true;
        }
        else if(key>mat[i][j]){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"Key not found!";
    return false;
}

int main(){
    int mat[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key = 10;
    Search(mat,4,4,key);
    return 0;
}
 