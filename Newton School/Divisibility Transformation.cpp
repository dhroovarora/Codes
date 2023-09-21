https://my.newtonschool.co/playground/code/ce17h50wgyll




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    long long ans = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        ans += min(a%k,k - a%k);
    }
    cout << ans;
    return 0;
}