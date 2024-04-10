https://my.newtonschool.co/playground/code/euo9zkxn5r76




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    set<char> st;
    for(auto i : s){
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
            st.insert(i);
    }
    cout << st.size();
    return 0;
}