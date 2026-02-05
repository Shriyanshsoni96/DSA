#include<iostream>
using namespace std;
int main() {
int n, i , j , k, l ;
cin>>n;
i = 0 ;
int mid=n/2;
while(i<n)
{
    // k is the ditance btw the 
    int k = abs(mid-i);
    int cols =n-(2*k);

    //space
    l=0;
    while(l<k){
      cout<<" ";
     l++;
    }
    j=0;
    while(j<cols)
    {
      if(j%2==0)
      {
        cout<<"1";
      }
      else cout<<"0";
      j++;
    }
    cout<<endl;
    i++;

}

}   