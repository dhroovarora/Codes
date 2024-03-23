https://my.newtonschool.co/playground/code/wyzbpovjbmfb




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
    int x;
    cin >> x;
    while(!isPrime(x))
        ++x;
    cout << x;
    return 0;
}
