https://my.newtonschool.co/playground/code/ajykmcao7f0s




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a = 0,b=1;
    int ans = 0;
    while(n--){
        ans += a;
        int c = a + b;
        a = b;
        b = c;
    }
    cout << ans;
    return 0;
}