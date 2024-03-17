https://my.newtonschool.co/playground/code/0t169dw6c75h




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int x,y;
    cin >> x >> y;
    cout << max(x-y,max(x+y,x*y));
    return 0;
}