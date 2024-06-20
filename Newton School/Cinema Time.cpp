https: // my.newtonschool.co/playground/code/z20ygvi8m4c9




#include <iostream>
#include <algorithm>
using namespace std;

int minimum_travel_time(int n) {
    int c = 1;  // Initial step count, since we start at the first subway station
    int p = 1;  // The first subway station at position 1
    int i = 2;  // The next triangular number addition
    bool found = false;

    // Find the maximum triangular number less than or equal to n
    while (p < n) {
        if (n - p <= 1 + (p + i - n)) {
            found = true;
            break;
        }
        p += i;
        c += 1;
        i += 1;
    }

    if (found) {
        c += (n - p);
    } else {
        c += (p - n);
    }

    // Compare walking the entire distance vs using the subway
    return min(c, n);
}

int main() {
    int X;
    cin >> X;
    cout << minimum_travel_time(X);
    return 0;
}