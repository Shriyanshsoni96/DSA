#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> n1={4,9,5};
vector<int> n2={9,4,9,8,4};
vector<int> ans;

for(int i = 0 ; i<n1.size();i++)
{
    for(int j = 0 ;j<n2.size() ;j++)
    {
        if(n1[i]==n2[j])
        {
            ans.push_back(n1[i]);
        }
    }
}
sort(ans.begin(),ans.end());
for(int i = 0; i < ans.size() - 1; i++)
{
    if(ans[i] == ans[i + 1])
    {
        ans.erase(ans.begin() + i);
        i--;
    }
}
for(int i = 0 ; i< ans.size();i++)
{
 cout<<ans[i]<<" ";

}
return 0;
}