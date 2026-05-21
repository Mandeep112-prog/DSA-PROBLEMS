
#include<iostream>
using namespace std;
class Print{
    public:
    int x;
    string str;
    void show(int x){
        cout<<"int x :"<<x<<endl;
    }

    void show(string str){
        cout<<"String :"<<str<<endl;
    }
};

int main(){
    Print p1;
    p1.show(10);
    p1.show("Mandeep");
    return 0;
}