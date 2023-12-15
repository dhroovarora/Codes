https://my.newtonschool.co/playground/code/9aca5fmb65j7




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    long long ans = 0;
    for(int i=0;i<n;++i)
        cin >> a[i];
    for(int i=1;i<n;++i){
        if(a[i] < a[i-1]){
            ans += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << ans;
    return 0;
}