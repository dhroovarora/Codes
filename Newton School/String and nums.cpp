https://my.newtonschool.co/playground/code/1gyz7ctcckab




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    string a = "";
    int q = 0;
    for(auto i : s){
        if(i >= '0' && i <= '9')
            q += (i - '0');
        else
            a += i;
    }
    sort(a.begin(),a.end());
    a = a + to_string(q);
    cout << a;
    return 0;
}