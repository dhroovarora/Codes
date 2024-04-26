https://my.newtonschool.co/playground/code/wb6et8brvbxv




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        sum += a[i];
    }
    sum /= n;
    int sum2 = sum + 1;
    int res = 0 , res2 = 0;
    for(int i=0;i<n;++i){
        res += ((sum - a[i])*(sum - a[i]));
        res2 += ((sum2 - a[i])*(sum2 - a[i]));
    }
    cout << min(res,res2);
    return 0;
}