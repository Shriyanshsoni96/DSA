#include<iostream>
using namespace std;
int main(){
    int i , n , j ;
    cin>>n;
    i=1;
    while(i<=n)
    {  //space
          j=n-i;
        while(j>=1)
        {
            cout<<"  ";
            j--;
        }

        int k =1;
        while(k<=2*i-1)
        {
            if(k%2==0)cout<<" !";
            else cout<<" *";
            
            k++;
        }
       
        cout<<endl;
        i++;
    }
}