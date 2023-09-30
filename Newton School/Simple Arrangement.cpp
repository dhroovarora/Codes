https://my.newtonschool.co/playground/code/uqslcyxqwo62




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    for(int i=0;i<n;++i)
        cout << a[a[i]] << " ";
    return 0;
}