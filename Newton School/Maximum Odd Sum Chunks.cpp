https://my.newtonschool.co/playground/code/mq3m3am7hjr2




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int ans = min(k,n-k);
    k -= ans;
    ans += k/3;
    cout << ans;
    return 0;
}