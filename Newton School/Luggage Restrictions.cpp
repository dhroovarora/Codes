https: // my.newtonschool.co/playground/code/val7igcb70ax




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    ((a<=e && b+c <= d) || (b<=e && a+c <= d) || (c<=e && a+b<= d)) ? cout << "Yes" : cout << "No";
    return 0;
}