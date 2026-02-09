#include<iostream>
using namespace std;
int main() {
    //CRETE
//int a[5];
int a[]={1,1,1,1,1};
int n;
cin>>n;
int arr[n];
// ALSO YOU CAN DECALRE USING FROM THE USER INPUT 

//READ
int s = sizeof(a)/sizeof(int);
for(int i =0;i<s;i++)
{cout<<a[i]<<" "<<endl;}
//UPDATE

for(int i=0;i<s;i++)
{
 a[i]+=i;
}
for(int i=0;i<s;i++)
{cout<<a[i]<<" ";}


}