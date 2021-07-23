#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * next;
    node (int x){
        data = x;
        next = NULL;
    }
};

node *insert_gvn_pos(node *head, int pos, int data)
{
    node *temp = new node(data);
    if (pos == 1){
        temp -> next = head;
        return temp;
    }

    node *curr = head;
    for (int i=1; i<= pos -2 && curr!= NULL;i++){
        curr = curr -> next;
    }

    if (curr == NULL)
        return head;

    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}

void print(node *head)
{   node *curr = head;
    while (curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }

}

int main()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(40);

    print(head);
    cout << endl;
    head = insert_gvn_pos(head,3,30);
    print(head);
}