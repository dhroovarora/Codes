https://my.newtonschool.co/playground/code/gu4xhpgylusc




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 1,temp = INT_MAX;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        if(a<temp){
            temp = a;
            ans = i+1;
        }
    }
    cout << ans;
    return 0;
}