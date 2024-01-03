https://my.newtonschool.co/playground/code/rz307jio49dj




#include <iostream>
using namespace std;

int calculateMod11(const string& s) {
    int remainder = 0;

    for (char digit : s) {
        int digitValue = digit - '0';
        remainder = (remainder * 10 + digitValue) % 11;
    }

    return remainder;
}

int main() {
    string inputString;
    cin >> inputString;

    int result = calculateMod11(inputString);
    cout << result;

    return 0;
}