#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int a){
        data = a;
        next = NULL;
    }
};

int Solution(node * head)
{
    int res = 0;
    int count = 0;
    node * curr = head;
    
    while (curr != NULL){
        count++;
        curr = curr -> next;
    }

    count --;
    curr = head;
    while (curr != NULL){
        if (curr -> data == 1){
            res += pow(2,count);
            count--;
        }
        
        else{
            count--;
        }
        curr = curr -> next;
    }
    return res;
}

int main()
{
    node * head = new node(1);
    head -> next = new node(0);
    head -> next -> next = new node(1);

    cout << Solution(head);    
    
}
