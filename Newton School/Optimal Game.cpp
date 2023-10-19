https://my.newtonschool.co/playground/code/w3hiypuw43g3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,c;
    cin >> a >> b >> c;
    if(c%2)
        (a+1 > b) ? cout << "Ritik" : cout << "Vikas";
    else
        (a > b) ? cout << "Ritik" : cout << "Vikas";
    return 0;
}