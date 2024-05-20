https://my.newtonschool.co/playground/code/fldml79krx9l




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void precomput(vector<int>& f) {
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i < 300; ++i) {
        f.push_back((f[i-1] + f[i-2]) % 100);
    }
}

int findLastDigit(const vector<int>& f, int n) {
    return f[n % 300];
}

int main() {
    int n;
    cin >> n;
    vector<int> f;
    precomput(f);
    cout << findLastDigit(f, n);
    return 0;
}