#include<iostream>
using namespace std;

class Example {
    public:
    Example(){
        cout<<"Constructor.....\n";// first print 
    }

    ~Example(){
        cout<<"destructor.....\n";//last print just before program or code end
    }
};

int main(){
    int x = 10;
    if(x == 10){
        static Example exg;// static object created for lifetime untill the our code end 
    }
    cout<<"Code ending...\n";//second print
    return 0;
}