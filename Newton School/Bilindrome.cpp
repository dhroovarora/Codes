https://my.newtonschool.co/playground/code/7h0x9ng8ythd




#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string l;
    cin >> l;
    unordered_map<char, int> d;
    bool f = false;

    for (char x : l) {
        d[x]++;
        if (d[x] == 2) {
            f = true;
        }
    }

    if (f) {
        cout << n - 2;
    } else {
        cout << -1;
    }

    return 0;
}