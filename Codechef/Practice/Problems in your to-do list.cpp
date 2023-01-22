https://www.codechef.com/problems/TODOLIST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        if(k >= 1000)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}
