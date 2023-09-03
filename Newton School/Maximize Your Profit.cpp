https://my.newtonschool.co/playground/code/pp2rs4zek62m




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int ans = 0;
    int mini = a[0];
    for(int i=1;i<n;i++){
        if(a[i] > mini){
            ans = max(ans,a[i] - mini);
        }
        else{
            mini = a[i];
        }
    }
    cout << ans;
    return 0;
}