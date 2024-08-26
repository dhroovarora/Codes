https://my.newtonschool.co/playground/code/s8uvvnk5pjop




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int fact(int n){
    if(n<=1)
        return 1;
    return n * fact(n-1);
}
int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = fact(n);
        ans /= fact(n-2);
        cout << ans << endl;
    }
    return 0;
}