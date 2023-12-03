https://my.newtonschool.co/playground/code/3dv9iucgu6ml




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a=1,b=1,c;
    int ans = 1;
    while(a%n!=0){
        c = a + b;
        a = b;
        b = c;
        ++ans;
    }
    cout << ans;
    return 0;
}