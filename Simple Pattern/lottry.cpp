#include<iostream>
using namespace std;
int main()
{
int i ;
cin>>i;
if(i>=300&&i<=460)
{
    cout<<"Macbook";
}
else if(i>=200&&i<=280)
{
    cout<<"Kurkure";

}
else if(i>=1100&&i<=1500)
{
    cout<<"Cycle";
}
else if(i>50&&i<=80)
{
    cout<<"Bike";
}
else
{
    cout<<"Better luck next time";
}
}