#include <iostream>
using namespace std;

int main()
{
    int s = 4;
    for (int i=1; i<=s; i++){
        for (int j=1; j<=s;j++){
            if (i == 1 || i == s)
                cout << "*" << " ";
            
            else{
                if (j == 1 || j ==s){
                    cout << "*" << " ";
                }

                else
                    cout << "  ";
            }
            
            
        }
        cout << endl;
    }
}