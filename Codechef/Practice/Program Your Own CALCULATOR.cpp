https://www.codechef.com/problems/URCALC




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here 
	float a,b;
	cin >> a >> b;
	char c;
	cin >> c;
	(c == '+') ? cout << a + b : (c == '-') ? cout << a - b : (c == '*') ? cout << a * b : (a!=0 && c=='/') ? cout<<fixed<<setprecision(8)<<((double)a)/b : cout<<"0";
	cout << endl;
	return 0;
}