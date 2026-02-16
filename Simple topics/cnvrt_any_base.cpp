#include <iostream>
using namespace std;

// Convert source base to decimal
int convertToDecimal(int sn, int sb) {
    int decimal = 0;
    int power = 1;

    while (sn > 0) {
        int digit = sn % 10;
        decimal += digit * power;
        power *= sb;
        sn /= 10;
    }

    return decimal;
}

// Convert decimal to destination base
int convertFromDecimal(int decimal, int db) {
    int result = 0;
    int power = 1;

    while (decimal > 0) {
        int digit = decimal % db;
        result += digit * power;
        power *= 10;
        decimal /= db;
    }

    return result;
}

// Main conversion function
int convert(int sb, int db, int sn) {
    int decimal = convertToDecimal(sn, sb);
    return convertFromDecimal(decimal, db);
}

int main() {
    int sb, db, sn;//sb source base ,sn source number , db destination base
    cin >> sb >> db >> sn;

    cout << convert(sb, db, sn);

    return 0;
}
