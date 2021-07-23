#include <iostream>
using namespace std;

void printdivisor(int n)
{
    int i;
    for (i = 1;i*i<n;i++){
        if (n%i == 0)
            cout << i << " ";
    }

    for (;i>=1;i--){
        if (n % i == 0)
            cout << n/i << " ";
    }
}

int main()
{
    int x = 100;
    printdivisor(x);
    return 0;
}