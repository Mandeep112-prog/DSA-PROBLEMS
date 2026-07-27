//class template - we can store different type of data 

//using vector implement stack
#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <class T>
class Stack{
    public:
    vector<T>vec;
    void push(T val){
            vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        vec.pop_back();
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size()==0;
    }
};

int main(){
    // Stack<int> s;
    // s.push(3);
    // s.push(2);
    // s.push(1);

    // Stack<char>s;
    // s.push('d');
    // s.push('c');
    // s.push('b');
    // s.push('a');

    Stack<string>s;
    s.push("mandeep");
    s.push("Sandeep");
    s.push("sachin");
    s.push("devendra");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}