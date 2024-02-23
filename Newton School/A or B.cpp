https://my.newtonschool.co/playground/code/jnl85t7kisn9




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int a=0;
    for(auto i :s){
        if(i == 'A')
            ++a;
        else
            --a;
    }
    cout << abs(a);
    return 0;
}