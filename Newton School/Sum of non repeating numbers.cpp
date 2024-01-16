https://my.newtonschool.co/playground/code/cemncky1uq3h




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    unordered_map<int,int> m;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        ++m[a];
    }
    int ans = 0;
    for(auto it:m){
        if(it.second == 1)
            ans += it.first;
    }
    cout << ans;
    return 0;
}