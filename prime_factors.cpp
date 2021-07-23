#include <iostream>
using namespace std;

void prime_factors(int n)
{
    if (n <=1)
        return;
    
    for (int i=2; i*i <=n;i++){
        while (n % i == 0){
            cout << i << " ";
            n = n/i;
        }
    }
    if (n > 1)
        cout << n <<" ";
}

int main()
{
    int x = 65;
    prime_factors(x);
    return 0;    
}