https: // my.newtonschool.co/playground/code/wx0keedi7mwr




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> d;
    for (char x : s) {
        ++d[x];
    }

    int c = 0;
    for (auto x : d) {
        if (x.second % 2 == 0) {
            c += x.second / 2;
        } else {
            c += x.second / 2 + 1;
        }
    }

    cout << c;
    return 0;
}