#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};
class DoubleList{
    public:
    Node*head;
    Node*tail;

    DoubleList(){
        head = tail = NULL;

    }

    void push_back(int val){
        Node*newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_back(){
        Node*temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

    void print(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    DoubleList dbll;
    dbll.push_back(1);
    dbll.push_back(2);
    dbll.push_back(3);
    dbll.push_back(4);
    dbll.push_back(5);
    dbll.push_back(6);
    dbll.print();
    dbll.pop_back();
    dbll.print();
    return 0;

}