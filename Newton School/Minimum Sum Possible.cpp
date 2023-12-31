https://my.newtonschool.co/playground/code/1dxm3lk028tw




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,k;
    cin >> a >> b >> k;
    bool flag = 1;
    int g = __gcd(a,b);
    int l = (a*b)/g;
    while(a != b && g != l && k){
        --k;
        if(flag){
            if(a < b)
                b = g;
            else
                a = g;
            flag = 0;
        }
        else{
            if(a < b)
                b = l;
            else
                a = l;
            flag = 1;
        }
        g = __gcd(a,b);
        l = (a*b)/g;
    }
    cout << a + b;
    return 0;
}