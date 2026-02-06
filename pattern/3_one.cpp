#include<iostream>
using namespace std;
int main() {
int n,i ,j,k;
i=1;
cin>>n;
while(i<=n){
    j=1;
   
    while(j<=n)
    {
         if(i==1||i==n-1||j==1||j==n)
         {
             cout<<"*";
        }
        else if(i>1&&i<n-1&&j>1&&j<n-1)
         {
            cout<<"#";
         }
          else if(i==(n/2)+1 && j==(n/2)+1)
            {
                cout<<"@";
            }
         j++;
}
    cout<<endl;
    i++;
}
}