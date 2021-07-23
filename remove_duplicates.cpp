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

node *remove_duplicate(node * head)
{
    for (node *curr = head; curr != NULL && curr -> next != NULL; ){
        if (curr -> data == curr -> next -> data){
            node *temp = curr -> next;
            curr -> next = curr -> next -> next;
            delete(temp);
        }
            
        
        else
            curr  = curr -> next;
    }
    return head;
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
    head -> next -> next = new node(20);
    head -> next -> next -> next = new node(30);
    head -> next -> next -> next -> next = new node(30);
    head -> next -> next -> next -> next -> next = new node(30);

    head = remove_duplicate(head);
    print(head);
}