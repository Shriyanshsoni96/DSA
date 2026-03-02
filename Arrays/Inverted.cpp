#include <iostream>
#include <vector>
using namespace std;

void invertArray(vector<int>& arr, vector<int>& inv, int index) {
    // Base case
    if (index == arr.size()) {
        return;
    }

    int value = arr[index];
    inv[value] = index;

    // Recursive call
    invertArray(arr, inv, index + 1);
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<int> inv(N);

    invertArray(arr, inv, 0);

    for (int i = 0; i < N; i++) {
        cout << inv[i] << " ";
    }

    return 0;
}