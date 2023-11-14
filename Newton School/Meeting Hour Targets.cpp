https://my.newtonschool.co/playground/code/tvy9gifr7hgj




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int k;
    cin >> k;
    int ans = 0;
    for(int i=0;i<n;++i)
        if(a[i] >= k)
            ++ans;
    cout << ans;
    return 0;
}