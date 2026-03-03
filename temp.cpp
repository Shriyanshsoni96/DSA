#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pairprint(vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    sort(arr.begin(), arr.end());

    pairprint(arr, target);

    return 0;
}