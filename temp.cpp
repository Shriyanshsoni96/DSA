#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<vector<int>> a(n,vector<int>(n));
for(int i =0 ;i<n;i++)
{
    for(int j = 0 ; j<n ;j++)
    {
        cin>>a[i][j];
    }
}
int maxSum = INT_MIN;
int index = -1;

for(int i = 0; i < n; i++)
{
    int sum = 0;
    for(int j = 0; j < n; j++)
    {
        sum += a[j][i];
    }
    if(sum > maxSum)
    {
        maxSum = sum;
        index = i;
    }
}

cout << index << " " << maxSum;


return 0;
}