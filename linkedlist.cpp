#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class list
{
    int data;
    list *next;
    list()
    {
        list->next = null;
    }
    void create();
    void insert();
    void print();
    void delete();
};

void main()
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
                l1.delete();
                break;
            case 3:
                l1.print();
                break;
            default:
                exit(0);
        }
    }
}

void create()
{
    list *root;
    list *temp = new list();
    cout<<"Enter the first element of the linked list! ";
    cin>>temp->data;
    root->next=temp;
}

void insert()
{
    cout<<"Enter the element to be inserted! ";
    cin>>curr->data;
    if (root->next==null)
        cout<<"Empty list ";

}
