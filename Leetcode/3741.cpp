#include<iostream>
#include<vector>
using namespace std;
int ans(vector<int> &num)
{   
    int n = num.size();
    int i = 0 ; 
    for(i = 0 ; i< n; i++ )
    {
        int j = i+1;
        int k = n-1;
        while(j<k)
        {
            if(num[i]==num[j] && num[i]==num[k])
            {
                    return abs(i-j)+abs(j-k)+abs(k-i);
            }
            else if(num[i]==num[j])
            {
                k--;
            }
            else if(num[i]==num[k])
            {
                j++;
            }
            else{
            j++;
            k--;
        }
        }
    }
    return -1;
}
int main(){
vector<int> num={1,1,2,3,2,1,2};
cout<<ans(num);
return 0;
}