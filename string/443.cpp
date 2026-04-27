#include<iostream>
#include<vector>
using namespace std;
void freq(vector<char>& chars)
{
    int cnt = 1;
    vector<char> ans;
    ans.push_back(chars[0]);
    for(int i = 1 ; i <chars.size() ; i++)
    {
        if(chars[i]!=chars[i-1])
        {
            ans.push_back(cnt+'0');
            ans.push_back(chars[i]);
            cnt=1;
        }
        else{
            cnt++;
        }
    }
            ans.push_back(cnt+'0');
    
    
  
   for(int i = 0 ; i<ans.size();i++)
   {
    cout<<ans[i];
   }
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout<<freq(chars);
    return 0;
}