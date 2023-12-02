https://my.newtonschool.co/playground/code/tpuxszr0i6ml




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,k;
    cin >> a >> b >> k;
    int ans = 0;
    int i=1;
    while(k){
        if(i%a==0 || i%b==0){
            ans += i;
            --k;
        }
        ++i;
    }
    cout << ans;
    return 0;
}