https://my.newtonschool.co/playground/code/9zrveq009eqf




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool check(unordered_map<int,int> m,int n){
    for(auto it : m){
        if(it.first > n/2)
            return 0;
        if(it.second > 2)
            return 0;
    }
    return 1;
}
int main() {
	// Your code here
    int n;
    cin >> n;
    unordered_map<int,int> m;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        ++m[a];
    }
    if(n%2)
        cout << "No";
    else if(check(m,n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}