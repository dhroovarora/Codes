https://my.newtonschool.co/playground/code/xi9rw2d14045




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b;
    cin >> a >> b;
    ((a%2 && b%2) || (a%2==0 && b%2==0)) ? cout << "Raj" : cout << "Tia";
    return 0;
}