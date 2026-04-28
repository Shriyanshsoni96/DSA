#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int i = 0;   // read pointer
    int k = 0;   // write pointer

    while(i < n) {
        int j = i;

        // count same characters (group)
        while(j < n && chars[j] == chars[i]) {
            j++;
        }

        int count = j - i;

        // write character
        chars[k++] = chars[i];

        // write count if > 1
        if(count > 1) {
            string cnt = to_string(count);
            for(char c : cnt) {
                chars[k++] = c;
            }
        }

        // move to next group
        i = j;
    }

    return k; // new length
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int len = compress(chars);

    cout << len << endl;
    for(int i = 0; i < len; i++) {
        cout << chars[i];
    }
}