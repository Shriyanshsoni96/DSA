#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
  

   while(n--)
   {long long i;
     cin>>i;
     int  se=0 , so=0;
     long long temp=n;
   while(temp!=0)
    {
     int d = temp%10;
     if(d%2==0){
      se+=d;
     }
     else
     {
      so+=d;
     }
     temp=temp/10;
    }

    if(se%4==0||so%3==0)
    {
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
   
  }
    
}
