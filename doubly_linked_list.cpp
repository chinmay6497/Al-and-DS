#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
    node(int a){
        data = a;
        prev = NULL;
        next = NULL;
    }
};

void print(node *head){
    node *curr = head;
    while (curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

int main()
{
    node * head = new node(10);
    head -> next = new node(20);
    head -> prev = NULL;
    head -> next -> next = new node(30);
    head -> next -> prev = head;
    head -> next -> next -> next = NULL;
    head -> next -> next -> prev = head -> next;
    print(head);
}