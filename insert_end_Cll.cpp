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

node * insert_end(node * head, int x)
{
    node * temp = new node(x);
    if (head == NULL){
        temp -> next = temp;
        return temp;
    }
    else{
       temp -> next = head -> next;
       head -> next = temp;
       int t = head -> data;
       head -> data = temp -> data;
       temp -> data = t;
       return temp; 
    }
}

int main()
{
    node * head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);
    head -> next -> next -> next -> next = head;
    // print(head);
    head = insert_end(head,50);
    print(head);
    return 0;
}