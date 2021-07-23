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

node *  segregrate(node * head)
{
    node * es = NULL;
    node * ee = NULL;
    node * os = NULL;
    node * oe = NULL;

    for (node * curr = head; curr != NULL; curr = curr->next){
        int x = curr -> data;

        if (x % 2 == 0){
            if (es == NULL){
                es = curr;
                ee =es;
            }
            else{
                ee -> next = curr;
                ee = ee -> next;
            }
        }
        else{
            if (os == NULL){
                os = curr;
                oe = os;
            }
            else{
                oe -> next = curr;
                oe = oe -> next;
            }
        }
    }

    if (os == NULL || es == NULL)
        return head;
    
    ee -> next = os;
    oe -> next = NULL;
    return es;
}

int main()
{
    node *head = new node(17);
    node * temp1 = new node(15);
    node * temp2 = new node(8);
    node * temp3 = new node(12);
    node * temp4 = new node(10);
    node * temp5 = new node(5);
    node * temp6 = new node(4);

    head -> next = temp1;
    temp1 -> next = temp2;
    temp2 -> next = temp3;
    temp3 -> next = temp4;
    temp4 -> next = temp5;
    temp5 -> next = temp6;

    head = segregrate(head);
    print(head);
}