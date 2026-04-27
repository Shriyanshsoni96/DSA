#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int index = 0;

    for(int i = 0; i < n; ) {
        char curr = chars[i];
        int count = 0;

        while(i < n && chars[i] == curr) {
            i++;
            count++;
        }

        chars[index++] = curr;

        if(count > 1) {
            string s = to_string(count);
            for(char c : s) {
                chars[index++] = c;
            }
        }
    }

    return index;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int len = compress(chars);

    cout << len << endl;
    for(int i = 0; i < len; i++) {
        cout << chars[i];
    }
}