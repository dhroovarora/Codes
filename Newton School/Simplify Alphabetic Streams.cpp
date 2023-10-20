https://my.newtonschool.co/playground/code/egj4l3gmzmsr




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string n;
    cin >> n;
    string ans = "";
    for(int i=0;i<n.size();i++){
        char a = n[i];
        while(i<n.size()-1 && n[i] == n[i+1])
            ++i;
        ans += n[i];
    }
    cout << ans;
    return 0;
}