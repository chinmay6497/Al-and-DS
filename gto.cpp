# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n value:" <<endl;
    cin >> n;

    if (n%2 == 0)
        goto label1;
    else
        goto label2;

    label1:
        {cout <<"Even Number";
        return 0;}
        
    label2:
        {cout <<"Odd Number";
        return 0;
        }
        return 0;   
}