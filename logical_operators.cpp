# include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 20, y = 10;
    bool z = (x > 0 && x < 100);
    cout << z <<endl;
    z = y > 0 || y > x;
    cout << z <<endl;
    z = !z;
    cout <<z <<endl;
    return 0;


}