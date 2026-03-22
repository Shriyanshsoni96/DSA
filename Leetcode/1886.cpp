#include<iostream>
#include<vector>
using namespace std;

// Function to rotate matrix 90 degree clockwise
void rotate(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> temp(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[j][n - i - 1] = mat[i][j];
        }
    }

    mat = temp; // update original matrix
}

// Function to check equality
bool isEqual(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n = mat.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] != target[i][j]) return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    vector<vector<int>> target(n, vector<int>(n));

    // Input mat
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    // Input target
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> target[i][j];
        }
    }

    // Try all 4 rotations
    for(int k = 0; k < 4; k++){
        if(isEqual(mat, target)){
            cout << "true";
            return 0;
        }
        rotate(mat);
    }

    cout << "false";
}