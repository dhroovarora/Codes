https://my.newtonschool.co/playground/code/5nn76j4pcauh




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        ++m[a];
    }
    int maxi = 0;
    int ans = 0;
    for(auto it : m){
        if(maxi < it.second){
            ans = it.first;
            maxi = it.second;
        }
    }
    cout << ans;
    return 0;
}