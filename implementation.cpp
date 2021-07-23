#include <bits/stdc++.h>
using namespace std;

struct mystack
{
    int cap;
    int *arr;
    int top;
    mystack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x){
        top++;
        arr[top] = x;
    }

    int pop(){
        int res = arr[top];
        top--;
        return res;
    }

    int peek(){
        return arr[top];
    }

    int size(){
        return top + 1;
    }

    bool is_empty(){
        return (top == -1);
    }
};

int main()
{
    mystack s(5);
    s.push(1);
    s.push(3);
    s.push(7);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    s.push(11);
    cout << s.size() << endl;
    cout << s.is_empty();
    return 0;
}