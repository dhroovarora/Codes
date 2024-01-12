https://my.newtonschool.co/playground/code/wnxefddmcjv6




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
    int ans = 0;
    for(int i=1;i<n;++i){
        int a = *max_element(arr,arr+i);
        int b = *min_element(arr+i,arr+n);
        if(a+b >= k)
            ++ans;
    }
    cout << ans;
    return 0;
}