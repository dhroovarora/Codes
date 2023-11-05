https://my.newtonschool.co/playground/code/nuj559un0zir




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int q = INT_MAX , p = 0 , ans = 0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        if(a%2){
            ++p;
        }
        else
            ++ans;
    }
    ans += p/2;
    cout << ans;
    return 0;
}