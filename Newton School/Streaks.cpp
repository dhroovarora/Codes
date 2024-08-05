https://my.newtonschool.co/playground/code/l03qnuif1ra3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        int count = 0;
        for(int i=0;i<n;++i)
            cin >> a[i];
        for(int i=0;i<n;++i){
            int b;
            cin >> b;
            if(a[i] == 0 || b == 0 ){
                ans = max(ans,count);
                count = 0;
            }
            else{
                ++count;
            }
        }
        cout << max(ans,count) << endl;
    }
    return 0;
}