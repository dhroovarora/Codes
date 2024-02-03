https://my.newtonschool.co/playground/code/i6fl0hhasshg




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int max1 = INT_MIN,max2 =INT_MIN,ans=0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        if(max1 < a){
            if(max2 < a){
                ans = i+1;
                max1 = max2;
                max2 = a;
            }
            else
                max1 = a;
        }
    }
    cout << ans << " " << max1;
    return 0;
}