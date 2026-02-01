#include<iostream>
using namespace std;
int main() {
int i ; 
i = 1 ;
int n ;
cin>>n;
while(i<=n)
{
 int j = n-i;
 while(j>=1)
 {
    cout<<" -";
    j--;
 }
    cout<<" *";

    //ye long wala part hai
  // //hollow space 
  //   int l = i-1;
  //   while(l>=1)
  //   {
  //       cout<<" -";
        
  //       l--;
  //   }
  // if(i>1)
  //   {
  //     l = i-2;
  //   while(l>=1)
  //   {
  //       cout<<" -";
        
  //       l--;
  //   }
   
  //   cout<<" *";
  // }
//   
  //ye short wala he 
  if(i>1)
  { int l=1;
    while(l<2*i-2)
    {
        cout<<" -";
        
        l++;
    }cout<<" *";
  }
    cout<<endl;
  i++;
}

i = n-1 ;
while(i>=1)
{
 int j = n-i;
 while(j>=1)
 {
    cout<<" -";
    j--;
 }
    cout<<" *";

  //ye short wala he 
  if(i>1)
  { int l=1;
    while(l<2*i-2)
    {
        cout<<" -";
        
        l++;
    }cout<<" *";
  }
    cout<<endl;
  i--;
}}