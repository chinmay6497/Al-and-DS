#include <bits/stdc++.h>
using namespace std;

void fgreater(int x,int y)
{
    if (x>y)
    {
        cout << x << "is greater" << endl;
        return;
    }
    cout << y << "is greater " << endl;
}

int main()
{
    fgreater(10,20);
    fgreater(20,10);
    return 0;
}
