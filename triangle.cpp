#include <iostream>
using namespace std;

int main()
{
    int s =9;
    for (int i=1; i<=s;i++){
        for (int j=1; j<=s; j++){
            if (j == 1)
                cout << "*"<<" ";
            
            else if (i == s)
                cout << "*"<<" ";
            
            else if (j ==i)
                cout << "*" << " ";
            
            else 
                cout << "  ";
        }
        cout << endl;
    }
}