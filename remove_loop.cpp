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
        cout << head -> data << " ";
        head = head -> next;
    }
}

void remove_loop(node * head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL || fast-> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

        if (slow == fast)
            break;
    }
    if (slow != fast)
        return;
    
    slow = head;
    while (slow -> next != fast -> next){
        slow = slow -> next;
        fast = fast -> next;
    }
    fast -> next = NULL;
}

int main()
{
    node *head = new node(10);
    node * temp1 = new node(20);
    node * temp2 = new node(30);
    node * temp3 = new node(40);

    head -> next = temp1;
    temp1 -> next = temp2;
    temp2 -> next = temp3;
    temp3 -> next = temp1;
    remove_loop(head);
    print(head);
}