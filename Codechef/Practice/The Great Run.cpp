 https://www.codechef.com/problems/PROC18A




 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
    	int n,k;
    	cin >> n >> k;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	    cin >> arr[i];
    	int ans = 0;
    	for(int i=0;i<k;i++)
    	    ans += arr[i];
    	int temp = ans;
    	for(int i=0;i<n-k;i++){
    	    temp -= arr[i];
    	    temp += arr[i+k];
    	    ans = max(ans,temp);
    	}
    	cout << ans << endl;
	}
	return 0;
}