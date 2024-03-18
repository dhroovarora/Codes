https://my.newtonschool.co/playground/code/mwlhk5delr9a




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(a+b,min(b+c,a+c));
    return 0;
}