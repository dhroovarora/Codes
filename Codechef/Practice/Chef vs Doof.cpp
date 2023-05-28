https://www.codechef.com/problems/CLLCM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    bool flag = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        if(k%2==0)
	            flag = 1;
	    }
	    (flag) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}