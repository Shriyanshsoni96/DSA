#include<iostream>

using namespace std;
int main(){
int n;
cin>>n;
int a[n];
if(1 <=  n >=(5*104))
{
   
    for (int i = 0; i < n; i++)
    { 
    for(int j = i+1 ; j < n ; j++ )
    {
       if(a[i]==a[j])
       {
        count++;
       }
    }
    if(count>n/2)
    {
        cout<<a[i];
    }
    count=0;
}
}
return 0;
}