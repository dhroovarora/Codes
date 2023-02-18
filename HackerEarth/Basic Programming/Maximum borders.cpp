https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/maximum-border-9767e14c/




#include <iostream>
using namespace std;
int main() {
	int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int ans = 0;
        for(int i=0;i<n;i++){
            int c = 0;
            for(int j=0;j<m;j++){
                char k;
                cin >> k;
                if(k == '#')
                    ans = max(ans,++c);
                else
                    c = 0;
            }
        }
        cout << ans << endl;
    }
}