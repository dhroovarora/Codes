https://my.newtonschool.co/playground/code/ypi9b48rx6gv




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
	int a[32];
	cin>>n;
    int ans = INT_MAX,res;
	for(int i=0;i<32;i++){
        if(ans > abs(n - pow(2,i))){
            res = pow(2,i);
            ans = abs(n - pow(2,i));
        }
    }
    cout << res;
    return 0;
}