#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {

    }
public:
    void create();
    void insert();
    void print();
    void del();
};
Node *head = NULL;
Node *tail = NULL;
int main()
{
    int choice;
    Node l1;
    l1.create();
    while (1)
    {
        cout<<"Enter your choice: \n 1. Insert \n 2.Delete \n 3. Print ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                l1.insert();
                break;
            case 2:
                l1.del();
                cout<<"Node after deletion is :";
                l1.print();
                break;
            case 3:
                cout<<"The Node is: ";
                l1.print();
                break;
            default:
                exit(0);
        }
    }
}

void Node::create()
{
    Node *temp = new Node;
    cout<<"Enter the first element of the linked Node! ";
    cin>>temp->data;
    head=tail=temp;
}

void Node::insert()
{
    Node *temp = new Node;
    cout<<"Enter the element to be inserted! ";
    cin>>temp->data;
    if (head!=NULL && tail!=NULL)
    {
        tail->next = temp;
        tail = temp;
    }
    else
    {
        cout<<"Node was empty and is now created! ";
        tail=head=temp;
    }
}

void Node::del()
{
    if (head==NULL)
    {
        cout<<"Node is empty and cannot be deleted! ";
    }
    else
    {
        int key;
        Node *temp = new Node;
        cout<<"Enter the element to be deleted! ";
        cin>>key;
        int i=1;
        for (temp=head;temp->next!=NULL;temp=temp->next)
        {
            if (temp->data==key)
            {
                cout<<"Element found at "<<i<<" position, and is deleted! ";
                temp->data=temp->next->data;
                temp->next=temp->next->next;

            }
            else
            {
                cout<<"Element not found in Node! ";
            }
        i++;
        }

    }
}

void Node::print()
{
    Node temp = new Node;
    for (temp = head; temp->next!=NULL; temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
}

