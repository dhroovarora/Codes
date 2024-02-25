https://my.newtonschool.co/playground/code/ryvxpd3t1l9b




#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    unordered_map<char, int> d;
    for (char x : s) {
        d[x]++;
    }
    priority_queue<int, vector<int>> h;
    for (auto& pair : d) {
        h.push(pair.second);
    }
    while (k) {
        int x = h.top();
        h.pop();
        x -= 1;
        --k;
        h.push(x);
    }
    int ans = 0;
    while (!h.empty()) {
        int x = h.top();
        h.pop();
        ans += x * x;
    }
    cout << ans;
    return 0;
}