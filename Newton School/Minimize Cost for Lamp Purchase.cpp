https://my.newtonschool.co/playground/code/2uej29c0i98p




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n,k,x,y;
        cin >> n >> k >> x >> y;
        if(x <= y){
            cout << n*x;
        }
        else{
            cout << k*x + (n-k)*y;
        }
        cout << endl;
    }
    return 0;
}