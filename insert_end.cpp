#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * next;
    node (int x)
    {
        data = x;
        next = NULL;
    }
};

node * insert_end(node * head,int x)
{
    node * temp = new node(x);

    if (head == NULL)
        return temp;
    
    node * curr = head; 
    while (curr->next != NULL){
        curr = curr-> next;
    }
    curr->next = temp;
    return head;
}

void print(node * head)
{
    while (head != NULL){
        cout << head->data << " ";
        head = head-> next;
    }
}

node * delete_first(node * head)
{
    if (head == NULL)
        return NULL;
    else{
        node * temp = head -> next;
        delete head;
        return temp;
    }
}

int main()
{
    node *head = NULL;
    head = insert_end(head,10);
    head = insert_end(head,20);
    head = insert_end(head,30);
    print(head);
    delete_first(head);
    print(head);
}