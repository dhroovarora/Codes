https://my.newtonschool.co/playground/code/m2ys8oczvmk7




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int  i = s.size() - 1,ans = 0;
    while(i>=0){
        if(s[i] == '5' || s[i] == '0')
            break;
        ++ans;
        --i;
    }
    cout << ans;
    return 0;
}