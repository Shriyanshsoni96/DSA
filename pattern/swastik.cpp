#include<iostream>
using namespace std;
int main() {
int i = 1;
int n ;
cin>>n;
if(n>=5)
{
int mid =  n/2+1;
while(i<=n)
{
    int j = 1;
    while (j<=n)
    {
        if (i==mid)
       {cout<<" *"; 
        }
       else if( i==1 && j==mid )
        {     
            int k = mid;
            while(k<=n)
            {
                cout<<" *";
                k++;
            }

        } 
       else if(i<=mid && j==1||j==mid)
       {
        cout<<" *";
       }
        else if(i>=mid && j==n)
        {cout<<" *";
        }
        
        else if(i==n&&j<=mid){
            cout<<" *";
        }
       else{
        cout<<"  ";
           }
       j++;
    }

cout<<endl;
i++;
}
}
else cout<<"Wrong input";
}
