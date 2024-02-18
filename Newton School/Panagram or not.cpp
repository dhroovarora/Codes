https://my.newtonschool.co/playground/code/2x8lrickivfk




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int a[26] = {0};
    for(auto it : s){
        if(it >= 'a' && it <= 'z')
            ++a[it - 'a'];
        if(it >= 'A' && it <= 'Z')
            ++a[it - 'A'];
    }
    for(int i=0;i<26;++i)
        if(a[i] == 0){
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}
