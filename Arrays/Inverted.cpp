#include<iostream>
#include<algorithm>
using namespace std;
int inverted(int arr[], int n )
{   int a[n];
    for(int i=0 ; i<n ; i++)
    {
        swap(arr[i],i);
       
    }
    
}
int main(){
int n ;
cin>>n;
int arr[n];
for(int i = 0 ; i<n ;i++)
{
   cin>>arr[i];
}
inverted(arr,n);
return 0;
}