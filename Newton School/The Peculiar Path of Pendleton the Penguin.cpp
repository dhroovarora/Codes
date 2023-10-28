https://my.newtonschool.co/playground/code/fx9jwril5vzj




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    int temp = 0;
    for(int i=0;i<n;++i){
        if(s[i] == 'L' || s[i] == '_')
            --temp;
        else
            ++temp;
    }
    ans = max(ans,abs(temp));
    temp = 0;
    for(int i=0;i<n;++i){
        if(s[i] == 'R' || s[i] == '_')
            ++temp;
        else
            --temp;
    }
    ans = max(ans,abs(temp));
    cout << ans;
    return 0;
}