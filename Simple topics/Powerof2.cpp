#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int i =1 ;
int pow=1;
// to find the power of 2
while(i<=n)
{   
    pow = pow*2;
    i++;
}
cout<<pow<<endl;
// Time Complexity: O(n)
// to find that the number is power of 2 or not
if(n>0 && (n & (n-1))==0){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
}