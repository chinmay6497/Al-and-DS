#include <bits/stdc++.h>
using namespace std;

// bool is_leap(int n)
// {
//     if (n % 400 == 0)
//         return true;
    
//     else if ( n% 4 == 0 && n%100!=0)
//         return true;
    
//     else 
//         return false;
// }

int main()
{
    int n =2017;

    // // cout << is_leap(n);
    // if (is_leap(n) == 1)
    //     cout << "12.09." << n;

    // // if (is_leap(n) == 0)
    // else
    //     cout << "13.09." <<n;
    string s = "";
    stringstream ss;
    ss << n;
    string str = ss.str();
    s = "12.09."+ str;

    cout << s;
}   