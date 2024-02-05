https://my.newtonschool.co/playground/code/4k197c7nzy6q




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,n;
    cin >> a >> b >> n;
    while(--n){
    int c = a ^ b;
    a = b;
    b = c;
    }
    cout << b;
    return 0;
}