#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();
    
    vector<int> ans;

    // total diagonals = m + n - 1
    for (int d = 0; d < m + n - 1; d++) {
        vector<int> temp;

        // starting point
        int row = (d < n) ? 0 : d - n + 1;
        int col = (d < n) ? d : n - 1;

        // collect elements of current diagonal
        while (row < m && col >= 0) {
            temp.push_back(mat[row][col]);
            row++;
            col--;
        }

        // reverse for even diagonals
        if (d % 2 == 0) {
            reverse(temp.begin(), temp.end());
        }

        // add to final answer
        for (int x : temp) {
            ans.push_back(x);
        }
    }

    return ans;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    // input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> result = findDiagonalOrder(mat);

    // print result
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}