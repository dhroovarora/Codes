https://my.newtonschool.co/playground/code/qns2gn3ixed7




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
string decToHexa(int n){
    string ans = "";
    while (n != 0) {
        int rem = 0;
        char ch;
        rem = n % 16;
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 87;
        }
        ans += ch;
        n = n / 16;
    }
    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
      swap(ans[i], ans[j]);
      i++;
      j--;
    }
    return ans;
}
int main() {
	// Your code here
    string s;
    cin >> s;
    string ans = "";
    int p = 0,i=0;
    while(i<s.size()){
        ans += s[i];
        int temp = 0;
        while(i<s.size() && s[i] == ans[p]){
            ++temp;
            ++i;
        }
        ans += decToHexa(temp);
        p = ans.size();
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}