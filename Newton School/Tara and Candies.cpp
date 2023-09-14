https://my.newtonschool.co/playground/code/28fkl8qvzo2o




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int x;
    cin >> x;
    int ans = x;
    while(x>2){
        ans += x/3;
        x = x%3 + x/3;
    }
    cout << ans;
    return 0;
}