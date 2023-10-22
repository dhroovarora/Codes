https://my.newtonschool.co/playground/code/gxp6pf6dtrf8




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int n;
    cin >> n;
    int a[n];
    for(int  i=0;i<n;++i)
        cin >> a[i];
    char b[n];
    for(int i=0;i<n;++i){
        b[a[i]] = s[i];
    }
    for(int i=0;i<n;++i)
        cout << b[i];
    return 0;
}