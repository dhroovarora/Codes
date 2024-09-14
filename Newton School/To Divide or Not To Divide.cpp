https://my.newtonschool.co/playground/code/usx6ht4m3ou0




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >> b >> n;
        if(a%b==0){
            cout << -1 << endl;
            continue;
        }
        int q = n%a;
        q = a - q;
        while(true){
            if(n%a==0 && n%b){
                cout << n;
                break;
            }
            n += q;
        }
        cout << endl;
    }
    return 0;
}