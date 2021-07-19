#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path) {
    int res = 0;
    int count = 0;
    for (int i=0; i<steps-1; i++){
        if (path[i] == 'U')
            res++;
        
        else if (path[i] == 'D')
            res--;
        
        if (res == 0)
            count++;
    }
    return count;
}

int main()
{
    int step = 10;
    string path = "UDUUUDUDDD";

    cout << countingValleys(step,path);    

}