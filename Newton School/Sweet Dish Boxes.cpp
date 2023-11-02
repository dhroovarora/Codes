https://my.newtonschool.co/playground/code/g6sb6fnxngxx




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >>  k;
    int sum = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        sum += a;
    }
    (sum%k) ? cout << sum/k + 1 : cout << sum/k;
    return 0;
}