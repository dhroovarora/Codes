https://my.newtonschool.co/playground/code/pynhcal1n66k




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a = 1,b=1;
    int ans = 1;
    --n;
    while(n--){
        int c = a + b;
        a = b;
        b = c;
        ans += a;
    }
    cout << ans;
    return 0;
}