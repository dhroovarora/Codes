https://my.newtonschool.co/playground/code/gwlr94vevypy




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    int m = INT_MIN;
    int cmsm = 0;
    for (int num : l) {
        cmsm += num;
    }

    int v = 0;
    for (int i = 0; i < n; ++i) {
        v += i * l[i];
    }
    m = max(m, v);

    for (int i = 1; i < n; ++i) {
        int nv = v - (cmsm - l[i - 1]) + (l[i - 1] * (n - 1));
        v = nv;
        m = max(m, nv);
    }

    cout << m << endl;

    return 0;
}