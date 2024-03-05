https://my.newtonschool.co/playground/code/ojoeulsgu0dx




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    (n<k*k) ? cout << "NO" : ((n&1 && k&1) || (n%2==0 && k%2==0)) ? cout << "YES" : cout << "NO";
    return 0;
}