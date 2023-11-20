https://my.newtonschool.co/playground/code/s442iopr0otl




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for(int i=0;i<m;++i)
        cin >> b[i];
    int i=0,j=0;
    int ans = -1;
    while(i<n && j<m){
        if(a[i] == b[j]){
            ans = a[i];
            break;
        }
        else if(a[i] < b[j])
            ++i;
        else
            ++j;
    }
    cout << ans;
    return 0;
}