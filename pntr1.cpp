#include <bits/stdc++.h>
using namespace std;

struct test {
    int x;
    int *p;
};

int main()
{
    struct test t;
    struct test *ptr = &t;

    t.x = 5;
    int b = 10;
    t.p = &b;

    cout << "Direct Access " << t.x << endl;
    cout << "Direct Access " << ptr->x << endl;

    cout << "Direct access to pointer " << *(t.p) <<endl;
    cout << "Direct access to pointer " << *(ptr->p) <<endl;

}