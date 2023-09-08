https://my.newtonschool.co/playground/code/k1i5u6sm4oyo




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    int temp = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a){
            ans = max(ans,temp);
            temp = 0;
        }
        else
            ++temp;
    }
    cout << max(ans,temp);
    return 0;
}