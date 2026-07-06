#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};
class List{
    public:
    Node*head;
    Node*tail;
    List(){
        head = NULL;
        tail = NULL;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }
  void push_back(int val){
    Node*newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
  }

  int searchItr(int key){
    Node*temp = head;
    int idx = 0;
    while(temp!=NULL){
        if(temp->data == key){
            cout<<"element found at :"<<idx;
            return idx;
        }
        else{
            temp = temp->next;
            idx++;
        }
    }
    return -1;
  }

  int helper(Node*temp, int key){

    if(temp == NULL){
        return -1;
    }
    if(temp->data == key){
        return 0;
    }
   int idx = helper(temp->next, key);

   if(idx == -1){
    return -1;
   }
   return idx+1;
  }

  int recursiveSearch(int key){
    return helper(head, key);
  }

    void print(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.print();
    // ll.searchItr(5);
    int index = ll.recursiveSearch(4);
    if(index == -1){
        cout<<"Element not found";
    }else{
        cout<<"Element found at index :"<<index;
    }

    return 0;
}