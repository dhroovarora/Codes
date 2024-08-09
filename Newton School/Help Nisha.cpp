https://my.newtonschool.co/playground/code/lr22m6q3frlj




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i=0;i<n;++i){
            int a;
            cin >> a;
            ans = max(a,ans);
        }
        cout << ans << endl;
    }
    return 0;
}