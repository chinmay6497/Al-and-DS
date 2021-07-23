#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {return a;}
    else
    {return gcd(b,a%b);} 
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b); 
}
int main()
{
    int a = 4;
    int b = 12;

    cout << "LCM of 2 numbers are " << lcm(a,b );
    return 0;
}