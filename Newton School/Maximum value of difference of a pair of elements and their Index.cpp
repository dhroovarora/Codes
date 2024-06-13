https: // my.newtonschool.co/playground/code/rqwc345nq180




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
    int ans = 0;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            ans = max(ans,abs(arr[i] - arr[j]) + abs(i-j));
        }
    }
    cout << ans;
    return 0;
}