#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec1 = {1,2,3,4,5,6};
    cout<<"Size of the vector array :"<<vec1.size()<<endl;
    cout<<"Element of vector array : ";
    for(int i=0; i<vec1.size(); i++){
       cout<<vec1[i]<<" ";
    }
    cout<<endl;
    return 0;
}