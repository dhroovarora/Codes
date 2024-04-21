https://my.newtonschool.co/playground/code/mgzpdg3oinsd




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    int p = n;
    while(n>1){
        ++ans;
        n /= 2;
    }
    int a = pow(2,ans);
    int b = 2*a;
    if(p - a <= b - p)
        cout << a;
    else
        cout << b;
    return 0;
}