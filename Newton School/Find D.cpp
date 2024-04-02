https://my.newtonschool.co/playground/code/wpcafhhf3mq3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,c;
    cin >> a >> b >> c;
    if(b%c==0)
        cout << b;
    else if(a%c==0)
        cout << a;
    else if(b/c == a/c)
        cout << -1;
    else
        cout << c*(a/c + 1);
    return 0;
}
