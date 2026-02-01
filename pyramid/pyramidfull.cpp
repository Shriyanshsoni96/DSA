#include<iostream>
using namespace std;
int main() {

int n ;
cin>>n;
  int i=1;
    while(i<=n)
    {
        //space
      int j=n-i;
        while(j>=1)
        {
            cout<<"  ";
            j--;
        }
      int k = 1 ;
      while(k<=2*i-1)
      {
        cout<<" *";
    k++;
      }
      cout<<endl;
      i++;
    }
      //ye niche ka pyramid hai 
     i = n-1 ;
while(i>=1)
{
 int j = n-i;
 while(j>=1)
 {
    cout<<"  ";
    j--;
 }
   
 int k =2*i-1 ;
      while(k>=1)
      {
        cout<<" *";
    k--;
      }
    cout<<endl;
  i--;
    }
}