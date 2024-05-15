https://my.newtonschool.co/playground/code/naxirxp2nzz9




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int a = s[0] - '0';
    for(int i=1;i<s.size();++i){
        a *= 10;
        a += (s[i] - '0');
        a %= 11;
    }
    cout << a;
    return 0;
}