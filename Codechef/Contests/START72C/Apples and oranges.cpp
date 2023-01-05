https://www.codechef.com/problems/APPLEORANGE




#include <iostream>
using namespace std;

int hcf(int a,int b){
    if (b != 0)
       return hcf(b, a % b);
    else 
       return a;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << hcf(n,m) << endl;
	}
	return 0;
}
