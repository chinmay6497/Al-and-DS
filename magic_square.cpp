#include <bits/stdc++.h>
using namespace std;

// int magic_square(vector<vector<int>>s)
// {
//     int n = s.size();
//     int col1,col2,col3;
//     int row1,row2,row3;

//     for (int i=0; i< n; i++){
//         for (int j=0; j<s[0].size();j++)

//     }
// }
int main()
{
    vector <vector <int>>s = {{4,8,2},{4,5,7},{6,1,6}};
    int n = s.size();
    int row[3] = {};
    int col[3] = {};

    for (int i=0; i< n; i++){
        for (int j=0; j< s[0].size(); j++)
            row[i] +=s[i][j];
    }

    for (int i=0; i< n; i++){
        for (int j=0; j< s[0].size(); j++)
            col[i] +=s[j][i];
    }

    for (int i=0; i<3;i++)
        cout << row[i] << " ";
    // int i;
    // for (i=0; i<3;i++){
    //     if (row[i] != col[i])
    //         break;
    // }
    // cout << i;
}