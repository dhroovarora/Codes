https://my.newtonschool.co/playground/code/grhd25gelh9q




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool isPrime(int n){
    if(n==2 || n==3)
        return 1;
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            return 0;
    return 1;
}
int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 1;
    for(int i=2;i<=n;++i){
        if(isPrime(i) || isPrime(i-1) || isPrime(i+1))
            ++ans;
    }
    cout << ans;
    return 0;
}