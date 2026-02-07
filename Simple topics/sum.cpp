#include<iostream>
using namespace std;
int main() {
int i , n ;
cin>>n;
int reverse=0;
  while(n!=0){
       long digit = (n %10);
         reverse = reverse+digit ;
        n = n / 10;
    }
    cout<<reverse<<endl;
//     if(reverse<0)
//     {
// cout<<reverse*-1;
//     }
    cout<<abs(reverse);

    //absoult function is used to display negative no into positive no
    
}