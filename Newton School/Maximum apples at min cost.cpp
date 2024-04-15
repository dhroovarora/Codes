https://my.newtonschool.co/playground/code/umsuko16nodf




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,a,b;
    cin >> n >> a >> b;
    int ans;
    if(b <= 2*a){
        if(n%2){
            ans = b*(n/2) + a;
        }
        else
            ans = b*(n/2);
    }
    else
        ans = a*n;
    cout << ans;
    return 0;
}