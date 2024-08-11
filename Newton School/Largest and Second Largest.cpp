https://my.newtonschool.co/playground/code/yl6n954g560s




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = 0,b=0;
        for(int i=0;i<n;++i){
            int c;
            cin >> c;
            if(a<c){
                if(b<c){
                    a = b;
                    b = c;
                }
                else if(c!=b){
                    a = c;
                }
            }
        }
        cout << a + b << endl;
    }
    return 0;
}
