https://codechef.com/practice/course/arrays-strings-sorting/INTARR01/problems/DOMINANT2




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n] ={0};
	    int maxi = 0;
	    for(int i=0;i<n;++i){
	        int q;
	        cin >> q;
	        ++a[q-1];
	        maxi = max(maxi,a[q-1]);
	    }
	    bool flag = 0;
	    int ans = -1;
	    for(int i=0;i<n;++i){
	        if(a[i] == maxi){
	            if(ans == -1)
	                ans = i;
	            else{
	                flag = 1;
	                break;
	            }
	        }
	        
	    }
	    (flag) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}