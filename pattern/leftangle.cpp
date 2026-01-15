#include<iostream>
using namespace std;
int main()
{
int i ;
cin>>i;
for(int j=1 ; j<=i ; j++)
{   cout<<endl;
   for(int space =0 ; space < i - j ; space++){
    cout<<" ";
   }
    for(int k=1 ; k<=j ; k++)
    {
        cout<<"*";
    }
}
}