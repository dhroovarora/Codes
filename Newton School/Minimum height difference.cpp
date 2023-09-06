https://my.newtonschool.co/playground/code/dlwrqrwjo7ij




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        sum += k;
    }
    (sum%n) ? cout << 1 : cout << 0;
    return 0;
}