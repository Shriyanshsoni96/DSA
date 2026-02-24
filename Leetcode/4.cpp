#include<iostream>
using namespace std;
int main(){
int num1[]={1,2};
int num2[]={3,4};

int m = sizeof(num1)/sizeof(int);
int n = sizeof(num2)/sizeof(int);
int merge[m+n];
for(int i = 0 ; i<m;i++)
{
    merge[i]=num1[i];
}
for(int i = 0 ; i<n ;i++)
{
    merge[i+m] = num2[i];
}
int mid=sizeof(m+n)/2;

float ans = (merge[mid]+merge[mid-1]);
cout<<ans/2;
return 0;

}