https://my.newtonschool.co/playground/code/22oy1siarx20




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,m;
    cin >> n >> m;
    if(m == 0 || n <= 1)
        cout << 0;
    else if(n > m)
        cout << 2*m + 1;
    else
        cout << 2*n - 1;
    return 0;
}