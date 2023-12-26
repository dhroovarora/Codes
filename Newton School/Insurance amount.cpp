https://my.newtonschool.co/playground/code/fmtjketnsvsi




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int x;
    cin >> x;
    if(1000%(x/4)){
        cout << 4000/x + 1;
    }
    else
        cout << 4000/x;
    return 0;
}