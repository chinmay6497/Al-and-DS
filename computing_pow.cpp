#include <iostream>
using namespace std;

// int pow(int x,int n)
// {
//     if (n ==0)
//         return 1;
//     int temp = pow(x,n/2);
//     temp = temp*temp;
//     if (n % 2 == 0)
//         return temp;
//     else 
//         return temp*x;
// }

int pow(int x, int n)
{
    int res = 1;
    while (n > 0){
        if (n%2!=0)
            res = res* x;
        x = x*x;
        n = n/2;
    }
    return res;
}

int main()
{
    int x = 3;
    int n = 5;
    cout << pow(x,n);
    return 0;
}