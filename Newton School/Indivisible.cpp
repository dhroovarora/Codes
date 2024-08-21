https://my.newtonschool.co/playground/code/sei64l7mt0bu




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int i=2;
        while(true){
            if(a%i && b%i && c%i){
                cout << i << endl;
                break;
            }
            ++i;
        }
    }
    return 0;
}