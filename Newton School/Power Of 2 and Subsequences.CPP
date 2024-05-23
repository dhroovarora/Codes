https://my.newtonschool.co/playground/code/3741vjh3kj8n




#include <iostream>
#include <vector>
using namespace std;

long long rec(int N, vector<int>& A) {
    const long long mod = 1000000007;
    long long ans = 1;
    for (int i = 0; i < N; ++i) {
        if ((A[i] & (A[i] - 1)) == 0 && A[i] != 0) {
            ans = (ans << 1) % mod;
        }
    }
    return (ans - 1 + mod) % mod;
}

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    cout << rec(n, l) << endl;
    return 0;
}