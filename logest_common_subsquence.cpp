#include <bits/stdc++.h>
using namespace std;

int longest_common_sub(string &s1, string &s2)
{
    int chr[256] = {0};
    int count = 0;
    for (int i=0; i< s1.length(); i++){
        chr[s1[i]]++;
        chr[s2[i]]++;
    }

    for (int i=0; i< 256; i++){
        if (chr[i] == 2)
            count++;
    }
    return count;
}

int main()
{
    string s1 = "abcdgh";
    string s2 = "aedfhr";
    cout << longest_common_sub(s1,s2);
    return 0;
}