#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the no =";
    cin>>n;
    for(i=1;i<=n;i++)
        {
            cout<<"\n"<<i;
            sum=sum+i;
        }
    cout<<" \nSum of natural no are ="<<sum;
return 0;
}

