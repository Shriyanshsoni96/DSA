#include<iostream>
using namespace std;
int main(){
int arr[3][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11}};
int rows= 3 ,clm=4;
int target = 9 ;
for(int i = 0 ; i < rows ; i++)
{
    for(int j = 0 ; j < clm ;j++ )
    {
        if(target==arr[i][j])
        {
            cout<<"Rows "<<i<<endl<<"Columns "<<j;
        }
    }
    cout<<endl;
}
return 0;
}