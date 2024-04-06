https://my.newtonschool.co/playground/code/iqvzka0zcyyw




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool has_common_factor(int l, int r) {
    for (int i = l; i <= r; ++i) {
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                return true;
            }
        }
    }
    return false;
}

string possible_numbers(int l, int r) {
    if (has_common_factor(l, r)) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int l, r;
    cin >> l >> r;
    cout << possible_numbers(l, r);
    return 0;
}