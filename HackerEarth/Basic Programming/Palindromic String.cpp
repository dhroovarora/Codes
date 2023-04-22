https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/




#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	string t = s;
	reverse(t.begin(),t.end());
	(t==s) ? cout << "YES" : cout << "NO";
}