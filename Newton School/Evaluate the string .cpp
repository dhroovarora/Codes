 https://my.newtonschool.co/playground/code/u2mlp4je75ao




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string str;
    cin >> str;
    int a = 0;
    int i=0;
    while(str[i] != '+'){
        a *= 10;
        a += (str[i] - '0');
        ++i;
    }
    ++i;
    int b = 0;
    while(i<str.size()){
        b *= 10;
        b += (str[i] - '0');
        ++i;
    }
    cout << a + b;
    return 0;
}