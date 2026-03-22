#include <iostream>
#include <string>
using namespace std;

// Function to expand and count palindromes
int expand(string &s, int left, int right) {
    int count = 0;

    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int total = 0;

    for (int i = 0; i < n; i++) {
        // Odd length palindromes
        total += expand(s, i, i);

        // Even length palindromes
        total += expand(s, i, i + 1);
    }

    cout << total << endl;

    return 0;
}