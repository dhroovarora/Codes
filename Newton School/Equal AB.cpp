https://my.newtonschool.co/playground/code/pwisrdp5i231




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b;
    cin >> a >> b;
    if(a==b)
        cout << 0;
    else if((a&b)==a || (a&b)==b)
        cout << 1;
    else
        cout << 2;
    return 0;
}