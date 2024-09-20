https://my.newtonschool.co/playground/code/yqafjoa5pauv




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
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        int ans = abs(a[0]) - 1;
        for(int i=1;i<n;++i){
            ans = min(ans,abs(a[i]) - 1);
        }
        cout << ans << endl;
    }
    return 0;
}