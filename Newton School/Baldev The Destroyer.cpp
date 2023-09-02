https://my.newtonschool.co/playground/code/6lx73grlvbz3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int i=0;
    for(;i<n;i++){
        if(a[i] > k)
            break;
        k += a[i];
    }
    cout << i;
    return 0;
}