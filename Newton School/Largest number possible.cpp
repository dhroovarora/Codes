https://my.newtonschool.co/playground/code/t4ktyyn133iu





#include <iostream>
#include <string>

using namespace std;

string largest_number_possible(int n, int s) {
    if (n == 1 && s == 0) {
        return "0";
    } else if (n >= 2 && s == 0) {
        return "-1";
    }

    string largest_number = "";

    for (int i = 0; i < n; ++i) {
        if (s >= 9) {
            largest_number += '9';
            s -= 9;
        } else {
            largest_number += to_string(s);
            s = 0;
        }
    }

    if (s > 0) {
        return "-1";
    } else {
        return largest_number;
    }
}

int main() {
    int n, s;
    cin >> n >> s;
    cout << largest_number_possible(n, s) << endl;
    return 0;
}