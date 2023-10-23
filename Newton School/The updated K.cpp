https://my.newtonschool.co/playground/code/e284n7732v8f




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int k,n;
    cin >> k >> n;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        k += a;
    }
    cout << k;
    return 0;
}