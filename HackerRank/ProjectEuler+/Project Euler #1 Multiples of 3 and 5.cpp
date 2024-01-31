https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem?isFullScreen=true




#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long ap_3 = (n-1)/3;
        long ap_5 = (n-1)/5;
        long ap_15 = (n-1)/15;
        cout << (3*(ap_3*(ap_3+1))/2) - (15*(ap_15*(ap_15+1))/2) + (5*(ap_5*(ap_5+1))/2) << endl;
    }
    return 0;
}