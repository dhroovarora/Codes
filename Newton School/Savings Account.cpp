https://my.newtonschool.co/playground/code/6vgxe5jgkrvz




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        x *= y;
        int ans = 0;
        while(x > z){
            ++ans;
            x -= y;
        }
        cout << ans << endl;
    }
    return 0;
}