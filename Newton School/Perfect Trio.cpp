https://my.newtonschool.co/playground/code/vhivmwszv19g




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a+b==c) || (a+c==b) || (b+c==a))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}