https://www.codechef.com/START73C/problems/APPENDOR/




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long n,y;
	    cin >> n >> y;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    long long c = arr[0];
	    for(int i=1;i<n;i++){
	        c |= arr[i];
	    }
	    bool flag = 0;
	    for(long long i = 0;i<=y;i++){
	        long long t = c;
	        if((t | i) == y){
	            flag = 1;
	            c = i;
	            break;
	        }
	    }
	    if(flag)
	        cout << c << endl;
	    else
	        cout << -1 << endl;
	}
	return 0;
}
