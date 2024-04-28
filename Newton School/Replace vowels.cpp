https://my.newtonschool.co/playground/code/alvljgn3ecig




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            ++s[i];
    }
    cout << s;
    return 0;
}