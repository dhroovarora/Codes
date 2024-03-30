https://my.newtonschool.co/playground/code/1tzz8torw6cc




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int a;
    cin >> a;
    string ans;
    int i=0;
    for(;i<s.size()-1;++i){
        if(a == 0)
            break;
        if(s[i] <= s[i+1]){
            --a;
        }
        else{
            ans += s[i];
        }
    }
    while(i<s.size()){
        ans += s[i];
        ++i;
    }
    cout << ans;
    return 0;
}