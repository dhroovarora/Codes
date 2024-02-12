https://my.newtonschool.co/playground/code/zv70e7w0oz1y




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    long long ans = 1;
    while(n){
        int a = n%10;
        n /= 10;
        if(a != 2 && a != 3 && a != 5 && a != 7)
            ans = (ans *a)%1000000007;
    }
    cout << ans;
    return 0;
}