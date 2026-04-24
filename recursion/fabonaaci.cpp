#include<iostream>
using namespace std;
int fanb(int n)
{
    if(n == 0 || n == 1) return n;
    return fanb(n-1) + fanb(n-2);
}

int main(){
    int n = 6;
    cout << fanb(n);
    return 0;
}