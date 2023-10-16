https://my.newtonschool.co/playground/code/boln9vof795q




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = INT_MIN,b = INT_MIN,c = INT_MIN;
        while(n--){
            int q;
            cin >> q;
            if(a < q){
                if(b < q){
                    if(c < q){
                        a = b;
                        b = c;
                        c = q;
                    }
                    else{
                        a = b;
                        b = q;
                    }
                }
                else{
                    a = q;
                }
            }
        }
        cout << c << " " << b << " " << a << endl;        
    }
    return 0;
}