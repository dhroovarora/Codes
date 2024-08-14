https://my.newtonschool.co/playground/code/m0j1pfc9l2h6




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    int c = 0;
    int ans = 0;
    for(int i=0;i<n;++i){
        if(a[i] == 0){
            ans = max(ans,c);
            c = 0;
        }
        else{
            ++c;
        }
    }
    cout << max(ans,c);
    return 0;
}
