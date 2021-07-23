#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * next;
    node(int a){
        data = a;
        next = NULL;
    }
};

void print(node * head)
{
    while (head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

node * reverse(node * head, int k)
{
    
}

int main()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);
    head -> next -> next -> next -> next = new node(50);
    head -> next -> next -> next -> next -> next = new node(60);

    head = reverse(head , 3);
    print(head);
    return 0;
}