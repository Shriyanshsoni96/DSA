#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, m, k, s;
    cin >> n >> m >> k >> s;

    vector<vector<char>> p(n, vector<char>(m));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> p[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(s <= k) break;

            if(p[i][j] == '.') {
                s -= 2;
            }
            else if(p[i][j] == '*') {
                s += 5;
            }
            else if(p[i][j] == '#') {
                break;
            }

            if(j != m - 1)
                s -= 1;
        }

        if(s <= k)
            break;
    }

    if(s >= k) {
        cout << "Yes\n";
        cout << s;
    }
    else {
        cout << "No";
    }

    return 0;
}