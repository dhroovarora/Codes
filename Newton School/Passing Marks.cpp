https://my.newtonschool.co/playground/code/m8mnu4fbo0i9




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);
    cout << a[n-x]-1;
    return 0;
}