# include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    if (num < 0)
        cout << "Enter a number greater than 0";
    else
        cout << (num)*(num+1)/2;
}           