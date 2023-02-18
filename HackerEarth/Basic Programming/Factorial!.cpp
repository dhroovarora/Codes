https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/




#include <iostream>
using namespace std;
int fact(int n){
	if(n==1)
		return 1;
	return n*fact(n-1);
}
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << fact(num);
}