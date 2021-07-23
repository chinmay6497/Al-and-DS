#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * prev;
    node * next;
    node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void print(node * head)
{
    node * curr = head;
    while (curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

node * delete_last(node * head)
{
    if (head == NULL)
        return NULL;
    
    if (head -> next == NULL){
        delete head;
        return NULL;
    }
    else{
        node * curr = head;
        while (curr -> next != NULL){
            curr = curr -> next;
        }
        curr -> prev -> next = NULL;
        delete curr;
        return head;
    }
}

int main()
{
    node * head = new node(10);
    node * temp1 = new node(20);
    node * temp2 = new node(30);

    head -> next = temp1;
    temp1 -> next = temp2;
    temp1 -> prev = head;
    temp2 -> prev = temp1;


    // print(head);
    head = delete_last(head);
    print(head);    
}