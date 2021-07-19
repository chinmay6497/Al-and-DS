#include <bits/stdc++.h>
using namespace std;

void  breaking_point(vector<int> arr)
{
    vector<int> soln;
    int n = arr.size();
    int count_min = arr[0];
    int count_max = arr[0];
    int count1 = 0;
    int count2 = 0;

    for (int i=1; i<n; i++){
        if (arr[i] > count_max){
            count_max = arr[i];
            count1++;
        }

        else if (arr[i] < count_min){
            count_min = arr[i];
            count2++;
        }
    }
    soln.push_back(count1);
    soln.push_back(count2);
    return soln;
    cout << count1 << " " << count2;
}

int main()
{
    vector<int> arr = {3,4,21,36,10,28,35,5,24,42};
    breaking_point(arr);
}
