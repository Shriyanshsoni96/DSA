#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Given CB primes
vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

// Function to check CB number
bool isCB(long long num) {
    if (num == 0 || num == 1) return false;

    // If number is in prime list → CB
    for (int p : primes) {
        if (num == p) return true;
    }

    // If divisible by any prime → NOT CB
    for (int p : primes) {
        if (num % p == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> visited(n, false); // to track used indices
    int count = 0;

    // Try all substring lengths
    for (int len = 1; len <= n; len++) {

        for (int i = 0; i + len <= n; i++) {

            int j = i + len - 1;

            // Check overlap
            bool canTake = true;
            for (int k = i; k <= j; k++) {
                if (visited[k]) {
                    canTake = false;
                    break;
                }
            }

            if (!canTake) continue;

            // Convert substring to number
            long long num = stoll(s.substr(i, len));

            // Check CB number
            if (isCB(num)) {
                count++;

                // Mark indices as used
                for (int k = i; k <= j; k++) {
                    visited[k] = true;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}