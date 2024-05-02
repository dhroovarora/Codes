https://my.newtonschool.co/playground/code/z4l48vjukjwv




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

vector<int> a;
vector<string> dp(100001, "NULL");

string f(int n) {
    if (dp[n] != "NULL") {
        return dp[n];
    }
    string res = "No";
    if (n == 1) {
        res = "Yes";
    }
    for (int x : a) {
        if (n % x == 0) {
            res = f(n / x);
        }
    }
    dp[n] = res;
    return res;
}

int main() {
    for (int i = 0; i <= 100000; i++) {
        string s = to_string(i);
        bool ok = true;
        for (char j : s) {
            if (j != '1' && j != '0') {
                ok = false;
            }
        }
        if (ok && i != 0 && i != 1) {
            a.push_back(i);
        }
    }
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}