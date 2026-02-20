#include<iostream>
using namespace std;
int main(){
int n[]={1,2,3,4};

 for(int i = 0 ; i<4;i++)
 {int pro=1;
     for(int j = 0 ; j<4 ; j++)
     {
        if(i!=j)
        {
            pro=pro*n[j];
        }
     }
     cout<<pro<<" ";
 }
 
return 0;
}