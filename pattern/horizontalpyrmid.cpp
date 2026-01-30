#include<iostream>
using namespace std;
int main() {
   int i , n ,j ;
   cin>>n;
   i=1;
   while (i<=n)
   {  
   //space
   j=n-i;
   while(j>=1)
   {
    cout<<"  ";
    j--;
   }
   //pattern
   int k = 1;
   while(k<=i)
   { 
     cout<<" *";
     k++;
   }
   cout<<endl;
    i++;
}
      i=n-1;
       while(i>=1)
       {
       //space
       j=n-i;
       while(j>=1)
        {
         cout<<"  ";
         j--;
        }
    //pattern
    int k=1;
    while(k<=i)
     {
      cout<<" *";
      k++;
    }
    i--;
    cout<<endl;
    }
  
}
