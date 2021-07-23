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

node * delete_first(node * head)
{
    if (head-> next == NULL || head == NULL)
        return NULL;
    
    else{
        node * temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
}

int main()
{
    node * head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);
    head -> next -> next -> next -> next = head;
    head = delete_first(head);
    print(head);
    return 0;
}