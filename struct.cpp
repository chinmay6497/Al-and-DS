#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p = {10,20};
    Point *ptr = &p;
    cout << ptr->x << " " <<p.x << " ";
    ptr->x = 30;
    cout << ptr->x;
}