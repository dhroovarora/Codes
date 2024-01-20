https://my.newtonschool.co/playground/code/ifm7q8yzlyc3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,c;
    cin >> a >> b >> c;
    ((a+b>=10) || (a+c>=10) || (b+c>=10)) ? cout << "YES" : cout << "NO";
    return 0;
}