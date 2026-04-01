#include<iostream>
using namespace std;
int main(){
string n1="123";
string n2="11";
int n = stoi(n1);
   n+=stoi(n2);
   string ans="";
   ans+=to_string(n);
cout<<ans;
return 0;
}