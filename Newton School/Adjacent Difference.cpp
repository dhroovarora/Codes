https://my.newtonschool.co/playground/code/q5g90kzswgs0




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int prev = n%10;
    n /= 10;
    int ans = 0;
    if(n==0){
        ans = prev;
    }
    while(n){
        int a = n%10;
        ans += abs(a-prev);
        n /= 10;
        prev = a;
    }
    cout << ans;
    return 0;
}