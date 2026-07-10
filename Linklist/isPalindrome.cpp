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

    bool isPalindrome(){
        Node*curr = head;
        Node*prev = NULL;
        while(curr!=NULL){
            Node*next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        Node*left = head;
        Node*right = prev;

        while(right!=NULL){
            if(left->data != right->data){
                return false;
            }
            else{
                left = left->next;
                right = right->next;
            }
            return 1;
        }




    }


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
    ll.push_back(2);
    ll.push_back(1);
    if(ll.isPalindrome()){
        cout<<"yes, it is palindrome";
    }
    else{
        cout<<"No, it is not palindrome";
    }
 
    return 0;

}