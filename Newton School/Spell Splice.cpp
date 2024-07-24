https://my.newtonschool.co/playground/code/kgb568zu015d




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int brr[n];
        long long ans = 0;
        for(int i=0;i<n;++i){
            cin >> arr[i];
            cin >> brr[i];
        }
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                long long s = arr[i] * brr[j] + arr[j] * brr[i];
                if(s > ans)
                    ans = s;
            }
        }
        cout << ans << endl;
    }
    return 0;
}