https://my.newtonschool.co/playground/code/8mcsoca85514




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,m;
    cin >> n >> m;
    int ans = 0;
    for(int i=0;i<=min(n,m);++i){
        for(int j=0;j<=min(n,m);++j){
            if((i*i)+j == n && i+(j*j) == m)
                ++ans;
        }
    }
    cout << ans;
    return 0;
}
