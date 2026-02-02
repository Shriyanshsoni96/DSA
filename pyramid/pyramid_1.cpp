#include<iostream>
using namespace std;

int main() {
    int i, n, j, k;
    cin >> n;

    i = 1;
    while(i <= n) {

        j = n - i;
        while(j >= 1) {
            cout << "  ";
            j--;
        }

        k = i;
        while(k <= 2*i - 1) {
            cout << k<<" ";
            k++;
        }
          int num = 2*i - 2;
        while(num >= i) {
            cout << num<<" ";
            num--;
        }
        cout << endl;
        i++;
    }
}
