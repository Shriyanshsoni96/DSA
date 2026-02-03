#include<iostream>
#include<cmath>
using namespace std;
int main (){
int n,i,flag;
cout<<"Enter the no:";
cin>>n; 
flag=true;
i=2;
while(i<=sqrt(n))
{
    if (n%i==0)
    {
        flag=false;
        break;
    }
    i++;
}
if(flag)cout<<" PRIME NO ";
else cout<<"UNPRIME NO ";
} 
