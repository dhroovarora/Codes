https://my.newtonschool.co/playground/code/itztzzk2k0ep




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n,x,k;
        cin >> n >> x >> k;
        n -= x;
        n %= k;
        x %= k;
        cout << max(n,x) - min(n,x);
        cout << endl;
    }
    return 0;
}