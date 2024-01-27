https://my.newtonschool.co/playground/code/wp4sds8thiyk




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> s1;
    int i = 0 ,ans = 0;
    while(i<n-1){
        if(i<0)
            i=0;
        if(s[i] == 'A' && s[i+1] == 'B' && (s1.find(i) == s1.end())){
            s1.insert(i);
            s[i] = 'B';
            s[i+1] = 'A';
            ++ans;
            i-=2;
        }
        ++i;
    }
    cout << ans;
    return 0;
}