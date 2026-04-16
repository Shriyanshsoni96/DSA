#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<long long> a(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    // if total sum is not divisible by 3 → no valid split
    if (total % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    long long target = total / 3;
    long long currentsum = 0;
    long long count = 0;   // number of times currentsum == target
    long long ans = 0;

    // loop till n-1 to avoid empty third part
    for (int i = 0; i < n - 1; i++) {
        currentsum += a[i];

        // if we reach 2 * target, add all previous target counts
        if (currentsum == 2 * target) {
            ans += count;
        }

        // count occurrences of target
        if (currentsum == target) {
            count++;
        }
    }

    cout << ans << endl;
    return 0;
}