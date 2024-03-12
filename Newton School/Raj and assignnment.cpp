https://my.newtonschool.co/playground/code/wbs6h9slhced




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int m,n;
    cin >> m >> n;
    int s = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        s += a;
    }
    (s > m) ? cout << -1 : cout << m - s;
    return 0;
}