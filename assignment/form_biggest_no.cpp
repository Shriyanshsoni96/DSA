#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator
bool cmp(string a, string b) {
    return a + b > b + a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> arr(n);

        // Input as string
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort using custom comparator
        sort(arr.begin(), arr.end(), cmp);

        // Edge case: if largest is "0"
        if (arr[0] == "0") {
            cout << "0" << endl;
            continue;
        }

        // Concatenate result
        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }
        cout << endl;
    }

    return 0;
}