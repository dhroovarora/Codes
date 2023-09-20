https://my.newtonschool.co/playground/code/mpndrokp6j7o




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int max_odd = INT_MIN,max_even = INT_MIN;
    int ans = -1;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a%2){
            if(max_odd != INT_MIN)
                ans = max(ans,max_odd + a);
            max_odd = max(max_odd,a);
        }
        else{
            if(max_even != INT_MIN)
                ans = max(ans,max_even + a);
            max_even = max(max_even,a);
        }
    }
    cout << ans;
    return 0;
}