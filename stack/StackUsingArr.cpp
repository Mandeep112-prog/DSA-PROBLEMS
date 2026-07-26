#include<iostream>
using namespace std;

class Stack {
    public:
    int arr[10];
    int topIdx = -1;

    void push(int val){
        if(topIdx == 9){
            cout<<"Stack is overflow";
        }
        arr[++topIdx] = val;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        topIdx--;
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        return arr[topIdx];
    }

    bool isEmpty(){
        return topIdx == -1;
    }
};

int main(){
    Stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();

  while(!s.isEmpty()){
    cout<<s.top()<<" ";
    s.pop();
  }

    return 0;
}