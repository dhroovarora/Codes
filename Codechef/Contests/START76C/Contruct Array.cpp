https://www.codechef.com/START76C/problems/CONSTRRAY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    if(n%2){
	        cout << -1 << endl;
	        continue;
	    }
	    long long k = 0;
	    bool flag = 0;
	    for(int i=0;i<n/2;i++){
	        k++;
	        (flag) ? cout << (-1)*k << " " : cout << k << " ";
	        flag = !flag;
	    }
	    for(int i=0;i<n/2;i++){
	        (flag) ? cout << (-1)*k << " " : cout << k << " ";
	        k--;
	        flag = !flag;
	    }
	    cout << endl;
	}
	return 0;
}