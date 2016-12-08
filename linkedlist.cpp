#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class list
{
public:
    int data;
    list *next;
    list()
    {

    }
public:
    void create();
    void insert();
    void print();
    void del();
};
list *head = NULL;
list *tail = NULL;
int main()
{
    int choice;
    list l1;
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
                cout<<"List after deletion is :";
                l1.print();
                break;
            case 3:
                cout<<"The list is: ";
                l1.print();
                break;
            default:
                exit(0);
        }
    }
}

void list::create()
{
    list *temp = new list;
    cout<<"Enter the first element of the linked list! ";
    cin>>temp->data;
    head=tail=temp;
}

void list::insert()
{
    list *temp = new list;
    cout<<"Enter the element to be inserted! ";
    cin>>temp->data;
    if (head!=NULL && tail!=NULL)
    {
        tail->next = temp;
        tail = temp;
    }
    else
    {
        cout<<"List was empty and is now created! ";
        tail=head=temp;
    }
}

void list::del()
{
    if (head==NULL)
    {
        cout<<"List is empty and cannot be deleted! ";
    }
    else
    {
        int key;
        list *temp = new list;
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
                cout<<"Element not found in list! ";
            }
        i++;
        }

    }
}

void list::print()
{
    list temp = new list;
    for (temp = head; temp->next!=NULL; temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
}

