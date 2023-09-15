https://my.newtonschool.co/playground/code/ocs0u3ibpyvh




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        for(int i=l-1;i<r;i++){
            a[i] ^= k;
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++)
        ans += a[i];
    cout << ans;
    return 0;
}