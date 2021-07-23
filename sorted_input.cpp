#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * next;
    node (int a){
        data = a;
        next = NULL;
    }
};

void print(node * head)
{
    while (head != NULL){
        cout << head-> data << " ";
        head = head -> next;
    }
}

node * sorted(node * head,int x)
{
    node *temp = new node(x);
    if (head == NULL)
        return temp;
    
    if ( x < head -> data){
        temp-> next = head;
        return temp;
    }
    
    node *curr = head;
    while(curr -> next != NULL && curr-> next -> data < x){
        curr = curr->next;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}

int main()
{
    node * head = new node(10);
    node * temp1 = new node(20);
    node * temp2 = new node(30);
    node * temp3 = new node(40);

    head -> next = temp1;
    temp1 -> next = temp2;
    temp2 -> next = temp3;
    
    head = sorted(head,35);
    print(head);
    return 0;
}