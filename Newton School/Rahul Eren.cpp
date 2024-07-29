https://my.newtonschool.co/playground/code/e2h6241xlkgz




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int ans = (n/2)*(a+b);
        if(n%2){
            ans += b;
        }
        cout << ans << endl;
    }
    return 0;
}