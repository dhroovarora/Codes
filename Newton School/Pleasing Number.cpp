https://my.newtonschool.co/playground/code/0xl1zhaksiok




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    while(n>9){
        int a = 0;
        while(n){
            a += n%10;
            n /= 10;
        }
        n = a;
    }
    (n&1) ? cout << "No" : cout << "Yes";
    return 0;
}