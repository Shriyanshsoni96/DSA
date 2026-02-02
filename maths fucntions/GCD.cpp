#include<iostream>
using namespace std;
//Euclidean Algorithms 
//GCD(greatest of common Factors)
// GCD(a,b)= GCD(b, a%b)
int main() {
    int a,b ;
    cin>>a>>b;
    while(b!=0){
        int t=a%b;
        a=b;
        b=t;
    }
    cout<<a<<endl;
}
// for use of inbuild function use LIBRARY #INCLUDE<ALGORITHM>
// COUT<<__GCD(a,b);