https://my.newtonschool.co/playground/code/vkhoezhakyiw




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int x = a - b;
        int ans = 0;
        while(x < 10){
            x += 3;
            ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}