https://my.newtonschool.co/playground/code/w959ptq7u4g3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a = n;
    int b = 0;
    while(a){
        b = b*10 + a%10;
        a /= 10;
    }
    cout << b*n;
    return 0;
}