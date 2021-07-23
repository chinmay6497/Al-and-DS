#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int key;
    int value;
    node * prev;
    node * next;

    node(int k, int v){
        key = k;
        value = v;
        prev = NULL;
        next = NULL;
    }
};

class lru_cache{
    public:
    unordered_map<int,node*> map;
    int capacity;
    int count;
    node * head, *tail;

    lru_cache(int c){
        capacity = c;
        count = 0;
        head = new node(0,0);
        tail = new node(0,0);

        head -> next = tail;
        tail -> prev = head;
        head -> prev = NULL;
        tail -> next = NULL;
    }

    void delete_node(node * Node){
        Node -> prev -> next = node -> next;
        Node -> next -> prev = node -> prev;
    }

    
}