https://my.newtonschool.co/playground/code/b6905bx8e4xw




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here 
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        (x >= 2*y) ? cout << 0 : cout << y/(x-1);
        cout << endl;
    }
    return 0;
}