#include <bits/stdc++.h>
using namespace std;

int matrixTSum(int n , vector<vector<int> > matrix){
    int sum = 0;
    for (int i=0;i <1; i++){
        for (int j = 0; j< n; j++)
            sum += matrix[0][j];
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    vector<vector<int > > matrix(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>matrix[i][j];
    }
    int result = matrixTSum(n, matrix);
    cout<< result <<"\n";
}