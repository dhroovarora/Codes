https://www.codechef.com/SEP221C/problems/SUBARRY/




#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
    int t;
	cin>>t;
	while(t--){
	    ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll max1 = LLONG_MIN,min1 = LLONG_MAX;
        for(int i=0;i<n;i++){
            if(max1 < a[i]){
                max1 = a[i];
            }
            if(min1 > a[i]){
                min1 = a[i];
            }
        }
        if(min1<0){
            if(max1<0){
                ll h = max1;
                max1 = min1*min1;
                min1 = h*h;
            }
            else{
                ll j = max1;
                max1 = max(max1*max1,min1*min1);
                min1 = min1*j;
            }
        }
        else{
            max1 = max1*max1;
            min1 = min1*min1;
        }
        cout<<min1<<" "<<max1<<endl;
	}
	return 0;
}
