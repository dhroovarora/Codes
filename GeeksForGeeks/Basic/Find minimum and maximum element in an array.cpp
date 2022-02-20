#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long min= a[0],max = a[n-1];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            swap(min,a[i]);
        }
    }
    for(int i=0;i<n-1;i++){
        if(max<a[i]){
            swap(max,a[i]);
        }
    }
    return {min,max};
    
}