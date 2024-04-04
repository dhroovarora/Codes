https://my.newtonschool.co/playground/code/4kxetu9f8fsd




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    for(int i=2;i<=n;++i){
        if(i%2==0 || i%3==0 || i%7==0)
            ans += i;
    }
    cout << ans;
    return 0;
}