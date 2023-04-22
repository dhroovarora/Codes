https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/




#include <iostream>
using namespace std;
int main() {
	int l;
	cin >> l;
	int n;
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		(a<l || b<l) ? cout << "UPLOAD ANOTHER" : (a==b) ? cout << "ACCEPTED" : cout << "CROP IT";
		cout << endl;
	}
}