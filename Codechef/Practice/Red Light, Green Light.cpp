https://www.codechef.com/problems/DOLL




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int count = 0;
	    for(int i=0;i<n;i++){
	        int y;
	        cin >> y;
	        if(y > k)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}