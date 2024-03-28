https://my.newtonschool.co/playground/code/vditrp0crb52




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int q = n;
    int s = 0;
    while(q){
        s += q%10;
        q /= 10;
    }
    (n%s) ? cout << "No" : cout << "Yes";
    return 0;
}