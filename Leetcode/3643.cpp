#include<iostream>
#include<vector>
using namespace std;
int main(){

    int m,n;
    cin >>m>> n;

    vector<vector<int>> a(n, vector<int>(n));

    // Input
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int x , y, k ;
    cin>>x>>y>>k;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(x-1 == i or y-1 == j )
            {
                continue;
            }
            
        }
        cout<<endl;
    }
    
return 0;
}