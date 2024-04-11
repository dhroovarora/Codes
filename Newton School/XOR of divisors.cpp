https://my.newtonschool.co/playground/code/alpzpepc6obk




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    for(int i=2;i<=n;i += 2){
        if(n%i==0){
            ans ^= i;
        }
    }
    cout << ans;
    return 0;
}