https://my.newtonschool.co/playground/code/ieo4aoe6wozp




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    int k;
    cin >> k;
    sort(a,a+n);
    int ans = INT_MAX;
    for(int i=1;i<n;++i){
        int temp = 1;
        while(i<n && a[i] - a[i-1] <= k){
            ++temp;
            ++i;
        }
        ans = min(ans,n-temp);
    }
    cout << ans;
    return 0;
}
