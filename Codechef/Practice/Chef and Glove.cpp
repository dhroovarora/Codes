https://www.codechef.com/problems/CHEGLOVE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    int brr[n];
	    bool flag1 = 1,flag2 = 1;
	    for(int i=0;i<n;i++)
	        cin >> brr[i];
	    for(int i=0;i<n;i++){
	        if(arr[i] > brr[i]){
	            flag1 = 0;
	            break;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i] > brr[n-1-i]){
	            flag2 = 0;
	            break;
	        }
	    }
	    (flag1 && flag2) ? cout << "both" : (flag1) ? cout << "front" : (flag2) ? cout << "back" : cout << "none";
	    cout << endl;
	}
	return 0;
}