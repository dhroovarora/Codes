https://my.newtonschool.co/playground/code/vgdcrhwtv28f




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int ans = 0;
    while(n){
        n /= k;
        ++ans;
    }
    cout << ans;
    return 0;
}