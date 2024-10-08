https://my.newtonschool.co/playground/code/cfhy2pxna1z9




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a1,a2,b1,b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    cout << max(a1,a2) + max(b1,b2) + max(c1,c2);
    return 0;
}