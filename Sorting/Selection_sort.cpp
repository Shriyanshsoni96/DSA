#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int arr[n];
for(int i = 0 ; i<n ; i++)
{
    cin>>arr[i];

}

for(int i = 0 ; i < n-1 ;i++  )
{
    int min=i;
    for(int j = i+1 ; j<n ; j++)
    {
       if(arr[j]<arr[j+1]){
        min=j;
       }
          swap(arr[i],arr[min]);
    }
 
}
cout<<"selection sort";
for(int i = 0 ; i<n ; i++)
{
    cout<<arr[i]<<" ";

}
}