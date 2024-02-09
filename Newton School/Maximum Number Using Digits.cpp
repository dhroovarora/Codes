https://my.newtonschool.co/playground/code/t5dpmooadfqb




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);
    if(a[0] != 0)
        cout << -1;
    else{
        for(int i=n-1;i>=0;--i)
            cout << a[i];
    }
    return 0;
}