https://www.codechef.com/problems/MOVIEWKN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int l[n] , r[n];
	    for(int i=0;i<n;i++)
	        cin >> l[i];
	    for(int i=0;i<n;i++)
	        cin >> r[i];
	    int maxi = 0,ri = 0,x = 0;
	    for(int i=0;i<n;i++){
	        if(maxi <= l[i]*r[i] && ri < r[i]){
	            maxi = l[i]*r[i];
	            ri = r[i];
	            x = i;
	        }
	    }
	    cout << x+1 << endl;
	}
	return 0;
}