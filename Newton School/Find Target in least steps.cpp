https://my.newtonschool.co/playground/code/oph5arsziato




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    while(n){
        if(n%2)
            --n;
        else
            n/=2;
        ++ans;
    }
    cout << ans;
    return 0;
}