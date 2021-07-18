#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // for (int i=0;i<v.size();i++)
    // cout <<v[i] <<" "<<endl;
    // for (auto x:v)
    // cout <<x <<" ";
    vector<int> v(10,5);
    for (auto y:v)
    cout << y <<" ";
}