https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem?isFullScreen=true




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    if(n==1)
        return 0;
    if(n==2 || n==3)
        return 1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        (isPrime(n)) ? cout << "Prime" : cout << "Not prime";
        cout << endl;
    }
    return 0;
}