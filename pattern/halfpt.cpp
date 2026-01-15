#include<iostream>
using namespace std;
int main()
{
int i ;
cin>>i;
for(int j=i ; j>0 ; j--)
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