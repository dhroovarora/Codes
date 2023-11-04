https://my.newtonschool.co/playground/code/8lob9doxk48y




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
    (k==0) ? cout << a[0] : cout << a[n-k];
    return 0;
}