#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num;
    int digits = 0;
    int temp = num;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    int sum = 0;

    // Calculate sum of digits^digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++) {
        if (isArmstrong(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
