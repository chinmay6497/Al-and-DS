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

node *reverse(node * head)
{
    if (head == NULL|| head-> next == NULL)
        return head;

    node * new_head = reverse(head-> next);
    node * temp_head = head-> next;
    temp_head -> next = head;
    head-> next = NULL;
    return new_head;
}

void print(node * head)
{
    while (head != NULL){
        cout << head -> data << " ";
        head = head-> next;
    }
}

int main()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);
    print(head);
    head = reverse(head);
    cout << endl;
    print(head);
}