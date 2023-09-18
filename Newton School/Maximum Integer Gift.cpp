https://my.newtonschool.co/playground/code/i358fbu35x4z




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int x,y;
    cin >> x >> y;
    cout << max(max(x+y,x*y),x-y);
    return 0;
}