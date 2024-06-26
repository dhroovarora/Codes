https://my.newtonschool.co/playground/code/vs4uiyq99090




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
    int a = 0;
    int ans = INT_MAX;
    for(auto i : m){
        if(i.second > a){
            a = i.second;
        }
    }
    for(auto i : m){
        if(a == i.second)
            ans = min(ans,i.first);
    }
    cout << ans << " " << a;
    return 0;
}