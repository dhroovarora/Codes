hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/




#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long ans = 1;
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		ans = (ans%1000000007 * k%1000000007)%1000000007;
	}
	cout << ans;
}