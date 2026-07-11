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

};
class List{
    public:
    Node*head;
    Node*tail;
    List(){
        head = NULL;
        tail = NULL;
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

    void print(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void RemoveCycle(Node* head){
        Node*slow = head;
        Node*fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
            cout<<"cycle exist"<<endl;
            isCycle  = true;
            break;
        }
        }
        if(!isCycle){
            cout<<"cycle doesn't exist";
            return;
        }

        slow = head;
        if(slow == fast){
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = NULL;

        }
        else{
            Node*prev = fast;
            while(slow!=fast){
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL;
        }
        
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
    ll.tail->next = ll.head;
    ll.RemoveCycle(ll.head);
    ll.print();
    

    return 0;
}