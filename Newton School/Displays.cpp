https://my.newtonschool.co/playground/code/wzvr94f7w5u8




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int i=1,a=n;
    while(i<a){
        if(n%i){
            ++i;
            continue;
        }
        a = n/i;
        ++i;
    }
    cout << n/a << ' ' << a;
    return 0;
}