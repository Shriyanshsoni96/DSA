// Adding binary numbers
 #include<iostream>
using namespace std;

string addBinary(string a, string b) {
    int i = a.size() - 1;  // last index of a
    int j = b.size() - 1;  // last index of b
    int carry = 0;
    
    string result = "";

    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if(i >= 0) {
            sum += a[i] - '0';  // char → int
            i--;
        }

        if(j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        // result bit
        result = char((sum % 2) + '0') + result;

        // update carry
        carry = sum / 2;
    }

    return result;
}

int main() {
    string a = "101";
    string b = "11";

    cout << addBinary(a, b);

    return 0;
}