https://my.newtonschool.co/playground/code/n3iqxdm3gnie




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    int k;
    cin >> k;
    k %= n;
    cout << k + 1;
    return 0;
}