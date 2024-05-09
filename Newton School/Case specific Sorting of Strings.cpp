https://my.newtonschool.co/playground/code/ysf5gu7xpji8




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    string a,b;
    for(auto i : s){
        if(i >= 'a'&& i <= 'z')
            a += i;
        else
            b += i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int q=0,w=0;
    for(auto i : s){
        if(i >= 'a'&& i <= 'z')
            cout << a[q++];
        else
            cout << b[w++];
    }
    return 0;
}