https://my.newtonschool.co/playground/code/ornkgpq44d4o




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,m,z;
    cin >> n >> m >> z;
    int lcm = (n*m)/__gcd(n,m);
    cout << z/lcm;
    return 0;
}