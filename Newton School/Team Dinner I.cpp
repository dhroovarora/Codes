https://my.newtonschool.co/playground/code/v6p7ekisxxtq




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
    double sum = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        sum += a;
    }
    if(isPrime(sum/3))
        cout << 0;
    else
        cout << fixed << setprecision(2) << sum/7;
    return 0;
}