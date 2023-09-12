https://my.newtonschool.co/playground/code/fff9w6fz5x30




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,k;
    cin >> n >> k;
    int w[n];
    for(int i=0;i<n;i++)
        cin >> w[i];
    sort(w,w+n);
    int i=0,j=n-1,ans=0;
    while(i<=j){
        if(w[i] + w[j] <= k){
            ++i;
            --j;
        }
        else{
            --j;
        }
        ++ans;
    }
    cout << ans;
    return 0;
}