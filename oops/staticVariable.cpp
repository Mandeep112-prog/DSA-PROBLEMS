#include<iostream>
using namespace std;

//in function
 void count(){
    //static variable - 
        static int count = 0;
        count++;
        cout<<"Count : "<<count;
        cout<<endl;
    }

    //in class

    class Example {
        public:
        static  int x;
        };

        int Example::x = 0;

int main(){
    // count();
    // count();
    // count();
    Example eg1;
    Example eg2;
    Example eg3;
    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;
    
    return 0;
}