https://my.newtonschool.co/playground/code/0k3wgnrz8dl8




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a = 1,b = 2;
    n -= 2;
    while(n--){
        int c = (a + b)%1000000007;
        a = b;
        b = c;
    }
    cout << b;
    return 0;
}