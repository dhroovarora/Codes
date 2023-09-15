https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/prime-array-5e448ef6/




#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i == 0)
			return 0;
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long c = 0,p=0;
		for(int i=0;i<n;i++){
			int k;
			cin >> k;
			if(k==1)
				++c;
			else if(isPrime(k))
				++p;
		}
		c *= (c-1);
		c /= 2;
		c *= p;
		cout << c << endl;
	}
}