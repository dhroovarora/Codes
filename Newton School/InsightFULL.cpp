https://my.newtonschool.co/playground/code/pek9osz161h2




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int ans=0,temp=0;
    for(int i=0;i<n;++i){
        int a,b;
        cin >> a >> b;
        if(a <= 10)
            if(b>temp){
                temp = b;
                ans = i + 1;
            }
    }
    cout << ans;
    return 0;
}