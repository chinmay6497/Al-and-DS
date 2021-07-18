# include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    char gen;

    cout << "Enter your age" <<endl;
    cin >> age;
    cout << "Enter your gender as F or M" <<endl;
    cin >> gen;
    
    if (gen == 'M')
    {
        cout <<"Male";

        if (age < 18)
            cout <<"Kid";
        else
            cout <<"Adult";
    }
    
    else if (gen == 'F')
    {
        cout<<"Female ";
        
        if(age < 18)
            cout<<"Kid";
        else
            cout<<"Adult";
    }

    else
        cout <<"Enter a valid Input";
    
    return 0;
}