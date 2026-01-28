#include<iostream>
using namespace std;

int main(){
    int i,n,j;
    cout<<"Enter the number of rows for two headed pyramid: ";
    cin>>n;
    
    //pyramid with no top there are two heads
    i=1;
    while(i<=n)
    {
        //space
        j=n-i;
        while(j>=1)
        {
            cout<<"  ";
            j--;
        }
      int k = 1 ;
      while(k<=i)
      {
        cout<<" *";
        cout<<" *";
    k++;
      }
      cout<<endl;
      i++;
    }

    //pyramid with single head 
    cout<<"Pyramid with single head "<<endl;
    i=1;
    while(i<=n)
    {
        //space
        j=n-i;
        while(j>=1)
        {
            cout<<"  ";
            j--;
        }
      int k = 1 ;
      while(k<=i)
      {
        cout<<" *";
    k++;
      }
      int l = 1;
      while(l<=i)
      {
        if(l!=1){
            cout<<" *";
        }
        l++;
      }
      cout<<endl;
      i++;
    }
}