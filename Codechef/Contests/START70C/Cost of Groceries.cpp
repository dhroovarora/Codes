https://www.codechef.com/problems/KITCHENCOST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,sum=0;
	    cin >> n >> x;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i] >= x)
	            sum += b[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
