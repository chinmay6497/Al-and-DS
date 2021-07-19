#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    vector <int> distance_apple = {0};
    vector <int> distance_orange = {0};
    int n = apples.size();
    int m = oranges.size();
    
    for (int i=0; i < n; i++){
        if (apples[i] < 0)
            distance_apple[i] = a + apples[i];
        
        else
            distance_apple[i] = a + apples[i];
    }
    
    for (int i=0; i<m;i++){
        distance_orange[i] = b + oranges[i];
    }
    
    // for (int i=0; i< m; i++)
    //     cout <<distance_orange[i] << " ";
    int apple_count = 0;
    int orange_count = 0;
    
    for (int i=0; i<n; i++){
        if ((apples[i]>= s) && (apples[i] <= t))
            apple_count++;
    }
    
    for (int i=0; i<m; i++){
        if ((oranges[i]>= s) && (oranges[i] <= t))
            orange_count++;
    }
    
    // cout << apple_count << endl;
    // cout << orange_count << endl;
}

int main()
{
    vector <int> apples = {-2,2,1};
    vector<int> oranges = {5,-6};
    countApplesAndOranges(5,11, 5, 15,  apples,  oranges);

}