#include<iostream>
using namespace std;
int main() {
 int i , n , j;
 cin>>n;
 i=1;
 while (i<=n)
 {
    j = n-i ;
    while(j>=1)
    {
        cout<<"- ";
        j--;
    }
    int k=i;
    while(k>=1)
    {
        cout<<k<<" ";
        k--;
    }
    cout<<endl;
  i++;
}}