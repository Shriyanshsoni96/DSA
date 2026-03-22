#include <iostream>
#include <string>
using namespace std;

// Function to find max length for a target character
int maxLen(string s, int k, char target) {
    int left = 0, right = 0;
    int count = 0; // number of chars to change
    int maxLength = 0;

    while (right < s.length()) {
        // If current char is not target → we need to change it
        if (s[right] != target) {
            count++;
        }

        // If changes exceed k → shrink window
        while (count > k) {
            if (s[left] != target) {
                count--;
            }
            left++;
        }

        // Update answer
        maxLength = max(maxLength, right - left + 1);
        right++;
    }

    return maxLength;
}

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    // Try both possibilities
    int ansA = maxLen(s, k, 'a');
    int ansB = maxLen(s, k, 'b');

    cout << max(ansA, ansB) << endl;

    return 0;
}