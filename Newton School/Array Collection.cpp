https://my.newtonschool.co/playground/code/r3mkwsu12imk




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
    int k;
    cin >> k;
    set<int> s;
    int ans = 0,temp = 0;
    for(int i=n-1;i>=0;--i){
        ++temp;
        if(s.size() == 0)
            s.insert(arr[i]);
        if(s.find(arr[i]) == s.end()){
            if(arr[i] <= k)
                s.insert(arr[i]);
        }
        if(s.size() == k){
            ans = temp;
            break;
        }
    }
    cout << ans;
    return 0;
}