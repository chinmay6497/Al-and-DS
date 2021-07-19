#include <bits/stdc++.h>
using namespace std;

string time_convert(string &s)
{
    int n = s.length();
    int zone = n-2;
    string min = s.substr(2,6);
    int time = stoi(s);
    string str;
    int conver;

    if (s[zone] == 'P'){
        if (time < 12)
        {conver = time + 12;
        stringstream ss;
        ss << conver;
        str = ss.str();
        }
        else if (time == 12)
            str = s.substr(0,2);
    }

    else if (s[zone] == 'A'){
        if (time == 12)
            str = "00";
        
        else{
            // stringstream st;
            // st << time;
            // str = st.str();
            str = s.substr(0,2);
        }
    }
    return (str + min);
}
int main()
{
    string s = "12:45:54PM";
    cout << time_convert(s);
    return 0;
}