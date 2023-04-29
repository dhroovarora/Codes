https://www.codechef.com/problems/COUNTP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count_even = 0,count_odd = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        (k%2) ? count_odd++: count_even++;
	    }
	    if(count_odd%2==0 && count_odd != 0)
	        cout << "YES";
	    else
	        cout << "NO";
	    cout << endl;
	}
	return 0;
}