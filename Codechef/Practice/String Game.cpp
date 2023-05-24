https://www.codechef.com/problems/ABSTRING




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int arr[26] = {0};
	    int flag = 0;
	    for(int i=0;i<n;i++)
	        arr[s[i] - 'a']++;
	    for(int i = 0; i < 26 ; i++){
	        if(arr[i]%2){
	            flag = 1;
	            break;
	        }
	    }
	    (flag) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}