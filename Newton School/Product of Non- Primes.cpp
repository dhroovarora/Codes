https://my.newtonschool.co/playground/code/3w5ynzuksib2




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 1;
    while(n){
        int a = n%10;
        ans *= (a==0 || a==4 || a==6 || a >= 8) ? a : 1;
        n /= 10;
    }
    cout << ans;
    return 0;
}