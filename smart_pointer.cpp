#include <bits/stdc++.h>
using namespace std;

class smartpointer
{
    int *ptr;
    public:
            smartpointer(int *p = NULL)
                {
                    ptr = p;
                }
            ~smartpointer()
                {
                    delete (ptr);
                }
            int& operator*()
                { return *ptr;}    
};

int main()
{
    smartpointer sp(new int());
    *sp = 20;
    cout << *sp;
    return 0;
}