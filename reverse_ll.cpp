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
    vector <int> arr;
    for (node* curr = head ; curr != NULL; curr = curr -> next){
        arr.push_back(curr -> data);
    }

    for (node *curr= head; curr != NULL; curr = curr ->next){
        curr -> data = arr.back();
        arr.pop_back();
    }
    return head;
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