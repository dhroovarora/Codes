https://my.newtonschool.co/playground/code/ijhd52bgrjsj




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans=0;
    int i=0;
    while(i<n){
        string a;
        cin >> a;
        i += a.size();
        int temp = 0;
        for(auto it :a){
            if(it >= 'A' && it <= 'Z')
                ++temp;
        }
        ans = max(ans,temp);
        ++i;
    }
    cout << ans;
    return 0;
}