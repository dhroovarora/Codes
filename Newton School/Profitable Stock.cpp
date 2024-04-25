https://my.newtonschool.co/playground/code/k28cyny4bstk




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    int p = 0;
    int m = l[0];
    for (int i = 1; i < n; ++i) {
        p = max(p, l[i] - m);
        m = min(m, l[i]);
    }
    cout << p;
    return 0;
}