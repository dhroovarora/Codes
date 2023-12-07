https://my.newtonschool.co/playground/code/vikaj70mlwsb




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for(int i=0;i<=n;++i){
        if(countSetBits(i) == k)
            ++ans;
    }
    cout << ans;
    return 0;
}