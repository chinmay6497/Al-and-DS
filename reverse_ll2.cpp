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

node * reverse(node * head)
{
    node * curr = head;
    node * prev = NULL;

    while (curr != NULL){
        node * next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void print(node * head)
{
    while (head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);

    print(head);
    cout << endl;
    head = reverse(head);
    print(head);
}