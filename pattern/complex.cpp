#include<iostream>
using namespace std;
int main() {
int i = 1;
int n;
cin>>n;
int mid= (n+1)/2;
while(i<=mid){
    //upper part
    int j = 1;
    while(j<=(mid - i))
    {
        cout<<" -";
        j++;
    }
    int k=i;
    while(k>=1&&k<=mid)
    {
        cout<<" "<<k;
        k++;
    }
    int is=(2*i-3);
    while(is>=1&&i<=mid)    {
        cout<<" -";
        is--;
    }
    int o=1;
    // while(o<=i&&o<=mid+1&&i<=mid)
    // {
    //     if(i==0)
    //     {
    //         o++;
    //         continue;
    //     }
    //     cout<<" "<<o;
    //     o++;
    // }
    
    //lower part
    // j = mid;
    // while(j>n-2*i-1&&j<=n)
    // {
    //     cout<<" -";
    //     j--;
    // }
    // k=mid+1;
    // while(k>=1)
    // {
    //     cout<<" "<<k;
    //     k--;
    // }
    cout<<endl;
    i++;
}
}