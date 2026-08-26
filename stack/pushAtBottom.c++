//pushAtButton => in existing stack suppose we have stack like : 1 2 3 the if i want to push one new element in button 
//of the stack element 4 then the stack looks like : 4 1 2 3 

#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int>&s,int val){//0(n)

    if(s.empty()){
        s.push(val);
        return ;
    }

    int temp = s.top();
    s.pop();

    pushAtBottom(s,val);
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s,5);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}
