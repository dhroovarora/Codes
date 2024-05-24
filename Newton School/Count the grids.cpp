https://my.newtonschool.co/playground/code/hp43zq40ibte




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

long long helper(int n){
    long long dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;++i){
        if(i>=1 && i<=3)
            dp[i] = 1;
        else if(i == 4)
            dp[i] = 2;
        else
            dp[i] = dp[i-1] + dp[i-4];
    }
    return dp[n];
}
int main() {
	// Your code here
    int n;
    cin >> n;
    cout << helper(n);
    return 0;
}