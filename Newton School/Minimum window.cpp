https://my.newtonschool.co/playground/code/0hpf7xc2o1gf




#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> l(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i];
        }
        unordered_map<int, int> d;
        int m = INT_MAX;
        int i = 0, j = 0;
        while (j < n) {
            d[l[j]]++;
            while (i < n && d.size() >= k) {
                if (d.size() == k) {
                    m = min(m, j - i + 1);
                }
                --d[l[i]];
                if (d[l[i]] == 0) {
                    d.erase(l[i]);
                }
                i++;
            }
            j++;
        }
        cout << m << endl;
    }
    return 0;
}