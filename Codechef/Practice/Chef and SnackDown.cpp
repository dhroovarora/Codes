https://www.codechef.com/problems/SNCKYEAR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019) ? cout << "HOSTED" : cout << "NOT HOSTED";
	    cout << endl;
	}
	return 0;
}