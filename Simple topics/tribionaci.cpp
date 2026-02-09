#include<iostream>
using namespace std;
int trib(int n){
    // base case
    if(n<=0){
        return 0;
    }
    else if( n==1 ){
        return 1;
    }
    // recursion
    return trib(n-1)+trib(n-2)+trib(n-3);
}
int main() {
int n;
cin>>n;
cout<<trib(n);
}   