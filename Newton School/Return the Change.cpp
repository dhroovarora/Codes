https://my.newtonschool.co/playground/code/18xlu8o4uf5h




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int a = x%10;
        if(a<5){
            x -= a;
        }
        else{
            x += (10-a);
        }
        cout << 100 -x << endl;
    }
    return 0;
}