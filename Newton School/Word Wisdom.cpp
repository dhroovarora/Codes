https://my.newtonschool.co/playground/code/zvqnzsznbvfv




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0;i<n;++i)
        cin >> a[i] >> b[i];
    int ans = 0,dhr=0;   
    for(int i=0;i<n;++i){
        if(a[i] <= 10){
            if(ans < b[i]){
                dhr = i;
                ans = b[i];
            }
        }
    }
    cout << dhr + 1;
    return 0;
}