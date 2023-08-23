https://www.codechef.com/problems/AVG




#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k,v;
        cin >> n >> k >> v;
        int sum = 0;
        for(int i=0;i<n;i++){
            int p;
            cin >> p;
            sum += p;
        }
        ((v*(n+k) - sum) <= 0 || (v*(n+k) - sum)%k) ? cout << -1 : cout << (v*(n+k) - sum)/k;
        cout << endl;
    }
	return 0;
}