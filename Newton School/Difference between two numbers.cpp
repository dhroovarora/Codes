https://my.newtonschool.co/playground/code/81b6cetu73wm




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,c;
    cin >> a >> b >> c;
    (a+b==c || a+c==b || b+c==a) ? cout << "Yes" : cout << "No";
    return 0;
}