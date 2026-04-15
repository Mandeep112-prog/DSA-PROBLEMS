//static memory allocation 
#include<iostream>
using namespace std;
void func(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size  = sizeof(arr)/sizeof(int);
    cout<<"Array elements are : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    func();
    return 0;
}
