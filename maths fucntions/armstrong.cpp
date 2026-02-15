// Armstrong number 
#include<iostream>
#include<cmath>
using namespace std;    
int main() {
    int n;
    cin>>n;
    int og=n;
    int temp=n;
    int sum=0;
    //
    int cnt=0;
    while (temp!=0)
    {
        temp=temp/10;
        cnt++;
    }
    while (n!=0)
    {
        int k=n%10;
        sum=sum+pow(k,cnt);
        n=n/10; 
    }
    if(sum==og){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }   
    return 0;
    
    
    
}