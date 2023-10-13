https://my.newtonschool.co/playground/code/za0xzogh6gni




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int k;
    cin >> k;
    (n%2) ? cout << min(k,2*n-1) : cout << min(k,2*n);
    return 0;
}