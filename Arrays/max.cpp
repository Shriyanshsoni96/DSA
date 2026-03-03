#include<iostream>
#include<climits>
using namespace std;
int main() {
int a[]={45,33,-21,34,56};
int s=sizeof(a)/sizeof(int);
//cout<<s;
  int i= 0;
  int max = INT_MIN;
  while(i<s)
  {
    if(max<a[i])
      {
          max = a[i];
      } 
  i++;
  }
cout<<"Maximum "<<max<<endl;
int min = INT_MAX;
int j =0;
while(j<s)
{
  if(a[i]<min)
    {
        min = a[i];
    } 
j++;
}
cout<<"Minimum "<<min;
}