#include<iostream>
using namespace std;
int digsum(int arr[][3],int rows, int clms)
{
    //for sum of right diagonal
int sum=0;
for(int i = 0 ; i < rows ; i++)
{
    for(int j = 0 ; j < clms ;j++ )
    {
        if(i==j)
        {
            sum=sum+arr[i][j];
        }
        else if(i==clms-i-1)
        {
            sum=sum+arr[i][j];
        }
    }  
}
return sum;
}
int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int rows= 3 ,clm=3;
cout<<digsum(arr,rows,clm);
}