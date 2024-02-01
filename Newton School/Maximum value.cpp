https://my.newtonschool.co/playground/code/8k69qq2jtnhx




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long n,k;
    cin >> n >> k;
    if(n&1){
        cout << min(2*n-1,k);
    }
    else
        cout << min(2*n,k);
    return 0;
}