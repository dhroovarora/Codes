https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/




#include <iostream>
using namespace std;
int main() {
	int l,r,k;
	cin >> l >> r >> k;
	int c = 0;
	for(;l<=r;l++)
		if(l%k==0)
			c++;
	cout << c;
}