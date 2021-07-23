#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int a){
        data = a;
        next = NULL;
    }
};

void print(node * head)
{
    if (head == NULL)
        return;
    
    node * p = head;
    do{
        cout << p-> data << " ";
        p = p-> next;
    } while(p != head);
}

node * insert_begin(node * head, int x)
{
    node * p = head;
    while ( p-> next != head){
        p = p-> next;
    }
    p-> next = new node(x);
    p-> next -> next = head;
    return p -> next -> next;
}

int main()
{
    node * head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);
    head -> next -> next -> next -> next = head;
    // print(head);
    head = insert_begin(head,50);
    print(head);
    return 0;
}