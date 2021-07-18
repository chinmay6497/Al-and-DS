#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a = 'b';
    cout << (char)((a>='a' and a <='z') ?( a - 'a' + 'A'): (a - 'A' +'a'));
}