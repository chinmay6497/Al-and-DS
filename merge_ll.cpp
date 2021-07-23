#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node * next;
    node(int a){
        val = a;
        next = NULL;
    }
};

void print(node * head)
{
    node * curr = head;
    while(curr != NULL){
        cout << curr -> val << " ";
        curr = curr -> next;
    }
}

node * merge_list(node * head1 , node *head2)
{
    node * curr1 = head1;
    node * curr2 = head2;
    node *temp1, *temp2;

    while (curr1 != NULL && curr2!= NULL){
        if (curr1 -> val <= curr2 -> val){
            temp1 = curr1 -> next;
            curr1 -> next = curr2;
            curr1 = temp1;
        }
        else{
            temp2 = curr2 -> next;
            curr2 -> next = temp1;
            curr2 = temp2;
        }
    }
    return head1;    
}

int main()
{
    node *head1 = new node(1);
    head1 -> next = new node(2);
    head1 -> next -> next = new node(4);

    node * head2 = new node(1);
    head2 -> next = new node(3);
    head2 -> next -> next = new node(4);

    // print(head1);
    // cout << endl;
    // print(head2);
    // cout << endl;
    node * head = merge_list(head1,head2);
    print(head);
}