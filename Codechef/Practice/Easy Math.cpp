https://www.codechef.com/problems/RPD




#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int sum(int x){
    int s = 0, temp;
    while(x != 0){
        temp = x%10;
        s += temp;
        x = x/10;
    }
    return s;
}

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    vector<int> a(n);
	    for(auto &i: a) cin >>i;
	    int maxVal = INT_MIN;
	    for(int i=0; i<n; i++){
	        for(int j=i+1; j<n; j++){
	            int x = a[i]*a[j];
	            x = sum(x);
	            maxVal = max(maxVal, x);
	        }
	    }
	    cout << maxVal <<endl;
	}
	return 0;
}