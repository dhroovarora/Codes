https://my.newtonschool.co/playground/code/qqm0jmxux7id




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
    while(!isPrime(n)){
        --n;
    }
    cout << n;
    return 0;
}