https://my.newtonschool.co/playground/code/nzrscfyhx484




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,w;
    cin >> n >> w;
    int wt[n];
    for(int i=0;i<n;i++){
        cin >> wt[i];
    }
    sort(wt,wt+n);
    bool flag = 0;
    int ans = 0;
    for(int i=n-1;i>=0;--i){
        ++ans;
        w -= wt[i];
        if(w <= 0){
            flag = 1;
            break;
        }
    }
    (flag) ? cout << ans : cout << -1;
    return 0;
}