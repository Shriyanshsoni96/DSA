#include<iostream>
#include<vector>
using namespace std;
   int maxSubArray(vector<int>& nums) {
   int csum=0;
     int max=nums[0];
     for(int i = 0 ; i<nums.size(); i++)
     {
        csum+=nums[i];
        if(csum>max)
        {
            max=csum;
        }
        if(csum<0)
        {
            csum=0;
        }
     }   
     return max;
    }
int main(){

return 0;
}