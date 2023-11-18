https://my.newtonschool.co/playground/code/licqz2205kzc




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,t;
    cin >> n >> t;
    ((t+1)%n) ? cout << ((t+1)%n) : ((t/n)%2) ? cout << n : cout << 1;
    return 0;
}