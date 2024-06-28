https://my.newtonschool.co/playground/code/n5upsaq3633r




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        sum += a;
    }
    (sum%2) ? cout << -1 : cout << abs(sum)/2;
    return 0;
}