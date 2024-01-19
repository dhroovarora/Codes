https://my.newtonschool.co/playground/code/astimee4i4pc




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min({(k*l)/nl,c*d,p/np})/n;
    return 0;
}