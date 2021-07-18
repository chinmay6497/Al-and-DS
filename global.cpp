# include <bits/stdc++.h>
using namespace std;

int x = 5;
int main()
{
    int x = 20;
    cout <<"Local Variable is " << x  <<endl ;
    cout <<"Global Variable is " << ::x;
    return 0;
}