https://my.newtonschool.co/playground/code/1gdswb9bzhmg




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int l,r,x;
    cin >> l >> r >> x;
    int ans = 0;
    ++l;
    for(;l<r;++l){
        int t = l;
        while(t){
            if(t%10 == x)
                ++ans;
            t /= 10;
        }
    }
    cout << ans;
    return 0;
}
