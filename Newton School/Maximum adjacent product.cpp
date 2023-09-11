https://my.newtonschool.co/playground/code/c4wisk2cgvsv




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int ans = a[0]*a[1];
    for(int i=1;i<n-1;i++)
        ans = max(ans,a[i]*a[i+1]);
    cout << ans ;
    return 0;
}