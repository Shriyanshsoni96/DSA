#include<iostream>
using namespace std;

int hammingWeight(int n) {
    int count = 0;

    while (n) {
        n = n & (n - 1); // removes one set bit
        count++;
    }

    return count;
}



// int hammingWeight(int n) {
//     int count = 0;

//     while (n > 0) {
//         count += (n & 1);
//         n = n >> 1;
//     }

//     return count;
// }
int main(){
int n = 11;
cout<<hammingWeight(n);
return 0;
}

