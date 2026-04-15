// for 2d dynamic memory allocation
#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter rows : ";
    cin>>rows;
    cout<<"Enter cols : ";
    cin>>cols;

    //dynamic memory allocation
    int **matrix = new int*[rows];
    for(int i=0; i<rows; i++){
        matrix[i] = new int[cols];
    }
    //data store and print 
    int x=1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    //explicitly matrix delete (very important)
    for(int i=0; i<rows; i++){
        delete[]matrix[i];
    }
    delete[]matrix;
    return 0;
}