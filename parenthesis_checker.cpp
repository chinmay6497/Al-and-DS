#include <bits/stdc++.h>
using namespace std;

bool ismatching(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}
bool balanced_checker(string &st)
{
    stack <int> s;
    for (int i=0; i< st.length(); i++){
        if (st[i] == '[' || st[i] == '(' || st[i] == '{')
            s.push(st[i]);
        
        else{
            if (s.empty())
                return false;
            
            else if (ismatching(s.top(),st[i]) == false)
                return false;
            
            else
                s.pop();
        }
    }
    return (s.empty() == true);
}

int main()
{
    string s = "[{}]";
    cout << balanced_checker(s);
    return 0;
}