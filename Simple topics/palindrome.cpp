#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int original = n;
bool isNegative = (original < 0);
n = abs(n);
original = abs(original);

int reverse = 0;
  while(n!=0){
       int digit = (n%10);
         reverse = (reverse*10)+digit ;
        n = n / 10;
    }
    if(isNegative){
        reverse = -reverse;
    }
    
    if(reverse == original){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}