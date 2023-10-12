https://my.newtonschool.co/playground/code/y0v1dk3cadlh




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int k;
    cin >> k;
    stack<char> q;
    q.push(s[0]);
    int i = 1;
    while(i<s.size() && k){
        while(q.size() && k && q.top() < s[i]){
            q.pop();
            --k;
        }
        q.push(s[i]);
        ++i;
    }
    string ans = "";
    while(!q.empty()){
        ans += q.top();
        q.pop();
    }
    reverse(ans.begin(),ans.end());
    while(i<s.size()){
        ans += s[i];
        ++i;
    }
    cout << ans;
    return 0;
}