#include <iostream>
using namespace std;

// int factorial(int x)
// {
//     int res = 1;
//     for (int i = 1; i<=x;i++){
//         res = res*i;
//     } return res;
// }

int factorial(int x)
{
    if (x == 1)
        return 1;
    return x * factorial(x-1);
}

int main()
{
    int x = 5;
    cout << "Factorial of " << x <<" is " << factorial(x);
    return 0;
}