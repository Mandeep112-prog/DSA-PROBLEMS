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
//this function is use for add node in linklist from the back
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
//this function is use to delete node from the back
    void pop_back(){
        Node*temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
//this function is use to print all linklist node 
    void print(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.print();//1->2->3->4->5->NULL
    ll.pop_back();
    ll.pop_back();//1->2->3->NULL
    ll.print();
    return 0;
}