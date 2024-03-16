https://my.newtonschool.co/playground/code/hain45l9amqi




#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    double s = 0;
    for (int x : l) {
        s += 1.0 / x;
    }
    s = 1.0 / s;
    cout << fixed;
    cout.precision(8);
    cout << s << endl;
    return 0;
}