https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/




#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else
			s[i] += 32;
	}
	cout << s;
}