https://my.newtonschool.co/playground/code/i2jvbzl7e9gx




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += l[i];
    }

    int nc = 0;
    for (int i = 0; i < n; ++i) {
        nc += max(0, l[i] - y);
    }

    if (s > (x + nc)) {
        cout << "COUPON" << endl;
    } else {
        cout << "NO COUPON" << endl;
    }

    return 0;
}
