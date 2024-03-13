https://my.newtonschool.co/playground/code/gaqmrjgqz3vs




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a = n%10;
    n /= 10;
    cout << n%10 + a;
    return 0;
}
