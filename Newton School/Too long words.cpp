https://my.newtonschool.co/playground/code/l2z578bdu62y




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        if(s.size() <= 10)
            cout << s;
        else
            cout << s[0] << s.size() - 2 << s[s.size() - 1];
        cout << endl;
    }
    return 0;
}