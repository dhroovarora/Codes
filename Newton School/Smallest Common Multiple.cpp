https://my.newtonschool.co/playground/code/5fwjg5m8i4cf




#include <bits/stdc++.h> // header file includes every Standard library
#define ll long long
using namespace std;
ll findGCD(ll a, ll b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main() {
	// Your code here
    ll a,b,c;
    cin >> a >> b >> c;
    ll gcd = findGCD(a, b);
    ll lcm = (a * b) / gcd;
    gcd = findGCD(lcm, c);
    lcm = (lcm * c) / gcd;
    cout <<  lcm;
    return 0;
}
