https://my.newtonschool.co/playground/code/h6pd2vtefj9c




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

#define ll long long
int main() {
	// Your code here
    int k;
    cin >> k;
    if(k<=2){
        cout << 0;
        return 0;
    }
    int count = 0;
    ll i = 1;
    ll ans = 0;
    k -= 2;
    while(k--){
        ans = (ans+i);
        ++count;
        if(count == 2){
            ++i;
            count = 0;
        }
    }
    cout << ans;
    return 0;
}