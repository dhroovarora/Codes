https://my.newtonschool.co/playground/code/xnwouvdhpvuk




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            return 0;
    return 1;
}
int main() {
	// Your code here
    int n;
    cin >> n;
    int count = 0,ans;
    for(int i=n;i>=0;--i){
        if(isPrime(i))
            ++count;
        if(count == 2){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}