https://my.newtonschool.co/playground/code/os2z8vf5ihm7




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        a.push_back({q,i+1});
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
        cout << a[i].second << " ";
    return 0;
}