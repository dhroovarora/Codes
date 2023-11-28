https://my.newtonschool.co/playground/code/q4eftuqa8u21




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int ans = 0;
    while(n--){
        int p = n+1;
        int t = 0;
        while(p){
            t += p%10;
            p /= 10;
        }
        if(t == k)
            ++ans;
    }
    cout << ans;
    return 0;
}