https://my.newtonschool.co/playground/code/bqosoelwc8m1




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,x;
    cin >> a >> b >> x;
    int ans = abs(a-b);
    (ans%(2*x)==0) ? cout << "Yes" : cout << "No";
    return 0;
}