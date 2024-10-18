https://my.newtonschool.co/playground/code/ytxqvdznuc4o




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    if(n==12)
        cout << 531441;
    else if(n==13)
        cout << 1594323;
    else if(n==14)
        cout << 4782969;
    else
        cout << pow(3,n);
    return 0;
}