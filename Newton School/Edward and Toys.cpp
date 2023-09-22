https://my.newtonschool.co/playground/code/m7olhth2bm64




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    int i = n-1,ans = 0;
    while(k--)
        ans += a[i--];
    cout << ans;
    return 0;
}