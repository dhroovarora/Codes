https://my.newtonschool.co/playground/code/w52dhkgq74u8




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int l,r,n;
    cin >> l >> r >> n;
    ++l;
    int ans = 0;
    while(l<r){
        int a = l;
        while(a){
            if(a%10 == n)
                ++ans;
            a /= 10;
        }
        ++l;
    }
    cout << ans;
    return 0;
}