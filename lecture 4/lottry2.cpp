#include<iostream>
using namespace std;
int main()
{
int i ;
cin>>i;
if(i>=300&&i<=460)
        {
    cout<<"You won a Macbook"<<endl;
                 if(i>=300&&i<=380)
    {
            cout<<"Model M1 Mac"<<endl;
                }
                else if(i>=381&&i<=460)
            {
            cout<<"Model M2 Mac"<<endl;
       }
            }
else if(i>=200&&i<=280)
{
    cout<<"You won a Kurkure"<<endl;
    if (i>=200&&i<=240)
    {
        cout<<"Flavor: Chilli kurkure"<<endl;
    }
    else if(i>=241&&i<=280)
    {
        cout<<"Flavor: Onion kurkure"<<endl;
}
else if(i>=1100&&i<=1500)
{
    cout<<"You won a Cycle"<<endl;
    if(i>=1100&&i<=1300)
    {
        cout<<"Brand Avon cycle "<<endl;
    }
    else if(i>=1301&&i<=1500)
    {
        cout<<"Brand Hero cycle "<<endl;
    }
}
else if(i>50&&i<=80)
{
    cout<<"You won a Bike"<<endl;
    if(i>50&&i<=65)
    {
        cout<<"Bullet "<<endl;
    }
    else if(i>65&&i<=80)
    {
        cout<<"Rajdoot"<<endl;
    }
}
else
{
    cout<<"Better luck next time"<<endl;
}
}
}