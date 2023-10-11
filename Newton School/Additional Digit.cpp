https://my.newtonschool.co/playground/code/o8tiwhkusmu3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    string ans;
    bool flag = 0;
    for(int i=0;i<s.size();++i){
        if(!flag && s[i] - '0' < d){
            ans += to_string(d);
            flag = 1;
        }
        ans += s[i];
    }
    if(!flag){
        ans += to_string(d);
    }
    cout << ans;
    return 0;
}