https://my.newtonschool.co/playground/code/1okus0he5mcr




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            return 0;
    return 1;
}

int helper(int n){
    if(isPrime(n))
        return n;
    int ans = 2;
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            if(isPrime(i))
                ans = max(ans,i);
            if(isPrime(n/i))
                ans = max(ans,n/i);
        }
    }
    return ans;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    cout << helper(n);
    return 0;
}