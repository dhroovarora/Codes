https://my.newtonschool.co/playground/code/qcfpzi44e13f




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n] , b[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=b[i];j++)
            ++m[j];
    }
    int ans = 0;
    for(auto i : m)
        ans = max(ans,i.second);
    cout << ans;
    return 0;
}