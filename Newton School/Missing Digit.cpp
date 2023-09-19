https://my.newtonschool.co/playground/code/8rgq1t0dkvzf




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    cin >> s;
    int a[10] = {0};
    for(auto it : s)
        ++a[it - '0'];
    for(int i=0;i<10;i++)
        if(a[i] == 0)
            cout << i;
    return 0;
}