https://my.newtonschool.co/playground/code/um3r1wl4k42p




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;++i)
            cin >> a[i];
        sort(a,a+n);
        int ans = 0;
        int i=0,j=n-1;
        bool flag = 0;
        while(i<=j){
            if(flag){
                ans -= a[i];
                ++i;
                flag = 0;
            }
            else{
                ans += a[j];
                --j;
                flag = 1;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}