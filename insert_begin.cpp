#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node (int x)
    {
        data = x;
        next = NULL;
    }
};

node* insert(node *head, int x)
{
    node *temp = new node(x);
    temp -> next = head;
    return temp;
}

void print(node *head)
{
    while (head != NULL){
        cout << head->data << " ";
        head = head-> next;
    }
}

int main()
{
    node * head = NULL;
    head = insert(head, 30);
    head = insert(head,20);
    head = insert(head,10);
    print(head);
}