#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int getSize()
    {
        Node *temp = head;
        int sz = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    void fint_remove_from_end(int n){
        Node* prev = head;
        int size = getSize();
        for(int i=1; i<(size-n); i++)
        {
            prev = prev->next;
        }
        Node*toDel = prev->next;
        cout<<"Going to delete :"<<toDel->data<<endl;
        prev->next = prev->next->next;
    }



    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.print();
    cout<<ll.getSize();
    cout<<endl;
    ll.fint_remove_from_end(2);
    ll.print();

    return 0;
}