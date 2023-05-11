 https://www.codechef.com/problems/FOODPLAN




 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double n,m;
	    cin >> n >> m;
	    ((9*n)/10 < m ) ? cout << "ONLINE" : ((9*n)/10 > m)  ? cout << "DINING" : cout << "EITHER";
	    cout << endl;
	}
	return 0;
}