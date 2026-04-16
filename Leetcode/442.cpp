#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,4,3,5,2,1,9,2};
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if(nums[index] < 0) {
                ans.push_back(abs(nums[i]));
            } else {
                nums[index] = -nums[index];
            }
        }
       for(int i = 0 ; i<ans.size();i++)
       {
        cout<<ans[i]<<endl; 
       }
       // return ans;

    }