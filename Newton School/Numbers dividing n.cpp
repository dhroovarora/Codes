https://my.newtonschool.co/playground/code/abxd78zmrnkc




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1;i<=sqrt(n);++i){
        if(n%i==0){
            if(i == sqrt(n))
                ++ans;
            else
                ans += 2;
        }
    }
    cout << ans;
    return 0;
}