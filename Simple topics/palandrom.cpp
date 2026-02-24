#include<iostream>
using namespace std;
int main ()
     {
    long n ;
   cout<<"enter the no ";
    cin>>n;
    long  reverse = 0;
    int temp=n;
    while( temp!=0 )
    {
       long digit = (temp %10);
         reverse = (reverse*10)+digit ;
        temp = temp  / 10;
    }
 
if (n == reverse ) cout<<"no is palandrom ";
else    cout<<"no is not palandrom";

return 0;
}
    
