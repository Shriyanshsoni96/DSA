#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cin>>n;
    
    // Upper pyramid (pointing up)
    i=1;
    while(i<=n) {
        //space
        j=n-i;
        while(j>=1)
        {
            cout<<"  ";
            j--;
        }
        //first star
        cout<<" *";
        
        //middle spaces/stars
        if(i>1) {
            j=1;
            while(j<2*i-2)
            {
                cout<<" -";
                j++;
            }
            cout<<" *";
        }
        
        cout<<endl;
        i++;
    }
       
    // Lower pyramid (pointing down)
    i=n-1;
    while(i>=1) {
        //space
        j=n-i;
        while(j>=1)
        {
            cout<<"  ";
            j--;
        }
        //first star
        cout<<" *";
        
        //middle spaces/stars
        if(i>1) {
            j=1;
            while(j<2*i-2)
            {
                cout<<" -";
                j++;
            }
            cout<<" *";
        }
        
        cout<<endl;
        i--;
    }
}