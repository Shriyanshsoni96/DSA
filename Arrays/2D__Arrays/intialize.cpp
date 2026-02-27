#include<iostream>
using namespace std;
int main(){
int arr[3][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11}};

int g = sizeof(arr)/(sizeof(int)*sizeof(int));

int h =sizeof(arr)/sizeof(int);

int a[3][4];
int row=3,clm=4;
  
for(int i = 0 ; i < row ; i++)
{
    for(int j = 0 ; j < clm ;j++ )
    {
        cin>>a[i][j];
    }
}
cout<<endl;
for(int i = 0 ; i < row ; i++)
{
    for(int j = 0 ; j < clm ;j++ )
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
// cin>>m>>n;
// int b[m][n]={0};


// for(int i = 0 ; i<3;i++)//no of rows
// {
//     for(int j = 0 ; j<4 ;j++)//no of coloumns 
//     {
//         cout<<arr[i][j]<<"  ";
//     }
//     cout<<endl;
// }

return 0;
}