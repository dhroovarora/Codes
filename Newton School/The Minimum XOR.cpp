https://my.newtonschool.co/playground/code/kn8618r7r5s0




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        for(int i=0;i<n;++i){
            cin >> a[i];
            ans ^= a[i];
        }
        int res = ans;
        for(int i=0;i<n;++i){
            ans ^= a[i];
            res = min(res,ans);
            ans ^= a[i];
        }
        cout << res << endl;
    }
    return 0;
}