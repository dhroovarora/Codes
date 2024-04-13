https://my.newtonschool.co/playground/code/vq3kfm2ioevt




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    while(n){
        if(n%10==7)
            ++ans;
        n /= 10;
    }
    cout << ans;
    return 0;
}
