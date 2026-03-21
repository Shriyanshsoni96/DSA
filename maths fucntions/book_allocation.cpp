#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr , int n , int m , int maximum )
{
    int student = 1 , pages = 0 ; 
    for(int i = 0 ; i<n ; i++ )
    {
        if(arr[i]>maximum)
        {
            return false; 
        }
        if(pages+arr[i]<=maximum)
        {
            pages+=arr[i];
        }
        else
        {
            student++;
            pages=arr[i];
        }
    }
    return student > m ? false : true;
}

int allocation(vector<int> &arr , int n , int m )
{   if(m>n)
    {
        return -1;
    }
    int sum = 0;
    for(int i = 0 ;i<n;i++ )
    {
        sum+=arr[i];
    }

    int ans = -1 ;  
    int start = 0 , end = sum ; 

   while(start<=end)
   {
    int mid = start+(end-start)/2;
    
    if(isvalid(arr,n,m,mid))//mid shift to left 
    { 
            ans =mid; 
            end=mid-1;
    }
    else// mid shift to right  
    {
        start = mid+1;
    }
   } 
//    cout<<sum<<endl;
return ans;
}

int main(){
vector<int> arr ={15,17,20};
int n = 3;// no of pages 
int m =2 ; //no of students
cout<<allocation(arr,n,m)<<endl;
return 0;
}