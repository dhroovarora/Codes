https://www.codechef.com/problems/PERMUT2




#include <iostream>
using namespace std;

int main() {
	// your code goes here;
	while(true){
    	int n;
    	cin >> n;
    	if(n==0)
    	    return 0;
    	int arr[n+1];
    	for(int i=1;i<=n;i++)
    	    cin >> arr[i];
    	int k[n+1];
    	for(int i=1;i<=n;i++){
    	    k[arr[i]] = i;
    	}
    	bool flag = 1;
    	for(int i=1;i<=n;i++){
    	    if(arr[i] != k[i]){
    	        flag = 0;
    	        break;
    	    }
	    }
	    if(flag)
	        cout << "ambiguous";
	    else
	        cout << "not ambiguous";
	    cout << endl;
	}
}