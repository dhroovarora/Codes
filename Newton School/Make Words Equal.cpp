https://my.newtonschool.co/playground/code/9xadjv447hc4




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string x,y;
    cin >> x >> y;
    int ans = INT_MAX;
    for(int i=0;i<x.size() - y.size() + 1;++i){
        int removedchar = 0;
        for(int j=0;j<y.size();++j){
            if(y[j] != x[i+j])
                ++removedchar;
        }
        ans = min(removedchar,ans);
    }
    cout << ans;
    return 0;
}