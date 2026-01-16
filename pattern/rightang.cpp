#include<iostream>
using namespace std;
int main()
{
int i ;
cin>>i;
for(int j=1 ; j<=i ; j++)
{ 
    for(int k=1 ; k<=j ; k++)
    {
        cout<<" * ";
    }
    for(int s=1 ; s<=i-j+1 ; s++)
    {
        cout<<" - ";
    }
      for(int s=1 ; s<=i-j+1 ; s++)
    {
        cout<<" - ";
    }
    for(int k=1 ; k<=j ; k++)
    {
        cout<<" * ";
    }
      cout<<endl;
}
for(int j=i ; j>0 ; j--)
{   cout<<endl;
   for(int space =0 ; space < i - j ; space++){
    cout<<" ";
   }
    for(int k=1 ; k<=j ; k++)
    {
        cout<<"*";
    }
// for(int j=1 ; j<=i ; j++)
// { 
//     for(int s=1 ; s<=i-j+1 ; s++)
//     {
//         cout<<" - ";
//     }
//     for(int k=1 ; k<=j ; k++)
//     {
//         cout<<" * ";
//     }
//      cout<<endl;
// }

}
}