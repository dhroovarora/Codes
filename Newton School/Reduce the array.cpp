https://my.newtonschool.co/playground/code/cwzv2gcf3seu




 #include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i)
            cin >> a[i];
        long long sum = 0, ans = 0;
        for(int i=n-1;i>=0;--i){
            sum += a[i];
            if(sum > 0){
                ans += sum;
                sum = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}