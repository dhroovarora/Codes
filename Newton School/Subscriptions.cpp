https://my.newtonschool.co/playground/code/980at8j01uge




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,x;
    cin >> n >> x;
    (n%6) ? cout << (n/6 + 1)*x : cout << (n/6)*x;
    return 0;
}