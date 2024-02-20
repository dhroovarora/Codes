https://my.newtonschool.co/playground/code/903xcqwx68ni




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;++i){
        cin >> arr[i];
        ++m[arr[i]];
    }
    int k;
    cin >> k;
    priority_queue<pair<int,int>> q;
    for(auto it : m)
        q.push({it.second,it.first});
    while(k--){
        cout << q.top().second << ' ';
        q.pop();
    }
    return 0;
}