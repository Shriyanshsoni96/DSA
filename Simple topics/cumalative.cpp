#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (true) {
        cin >> num;

        sum += num;

        if (sum < 0)
            break;

        cout << num << endl;
    }
//cumulative sum means agr jo hunme input diye
 //he unko sabko add krne pe if negative then use like
 // negative agr sum negative he to vo negative ke pehele
 // ke print kre other wise pura print kre
    return 0;
}
