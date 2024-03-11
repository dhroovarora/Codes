https://my.newtonschool.co/playground/code/kzc46yj5avah




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    double a = 0;
    for(int i=0;i<n;++i){
        int q;
        cin >> q;
        a += q;
    }
    cout << fixed << setprecision(2) << a/7;
    return 0;
}
