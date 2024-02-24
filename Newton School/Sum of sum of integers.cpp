https://my.newtonschool.co/playground/code/zlfsz2wkmyy2




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1;i<=n;++i){
        int t = i;
        while(t){
            ans += t%10;
            t /= 10;
        }
    }
    cout << ans;
    return 0;
}