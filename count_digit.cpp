#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x = 25616554545445341;
    int count = 0;
    while (x !=0){
        x = x/10;
        count++;
    }cout << count <<endl;
}

// Using recursion


int count_digit(long long x)
{
    if (x == 0){
        return 0;
    }
    return (1+count_digit(x/10));
}

int main(void)
{
    long long int x = 2562654654;
    cout << "Number of digits are " << count_digit(x);
    return 0;
}

// Using Log

int count_digit(long long n)
{
    return floor(log10(n)+1);
}
int main()
{
    long long int x = 2562654654;
     cout << "Number of digits are " << count_digit(x);
    return 0;
}