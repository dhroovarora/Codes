https://my.newtonschool.co/playground/code/5q7vilcao6p5




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n-1;
    for(int i=0;i<n;++i){
        if(s[i] == 'B')
            --ans;
        else
            break;
    }
    for(int i=n-1;i>=0;--i){
        if(s[i] == 'A')
            --ans;
        else
            break;
    }
    cout << max(ans,0);
    return 0;
}