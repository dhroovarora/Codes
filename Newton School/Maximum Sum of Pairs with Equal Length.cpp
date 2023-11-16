https://my.newtonschool.co/playground/code/i0oshfyu0ybt




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = INT_MIN;
    int prev1 = 0,prev2 = 0;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
    sort(arr,arr+n);
    int i=0;
    while(i<n){
        int temp1 = 0,temp2 = arr[i];
        while(arr[i]){
            ++temp1;
            arr[i] /= 10;
        }
        if(temp1 == prev1){
            ans = max(ans,prev2+temp2);
        }
        prev1 = temp1;
        prev2 = temp2;
        ++i;
    }
    if(ans == INT_MIN)
        cout << 0;
    else
        cout << ans;
    return 0;
}