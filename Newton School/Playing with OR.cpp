https://my.newtonschool.co/playground/code/vxbekt7d0ccp




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        int ans = 0;
        for(int i=0;i<n;++i)
            cin >> arr[i];
        int odd_count = 0;
        for(int i=0;i<k;++i){
            if(arr[i]%2){
                ++odd_count;
            }
        }
        if(odd_count)
            ++ans;
        for(int i=0;i<n-k;++i){
            if(arr[i+k]%2){
                ++odd_count;
            }
            if(arr[i]%2){
                --odd_count;
            }
            if(odd_count){
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}