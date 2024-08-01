https://my.newtonschool.co/playground/code/xabshwx4ixac




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int h,x,y;
        cin >> h >> x >> y;
        h -= y;
        int count = 1;
        while(h > 0){
            h -= x;
            ++count;
        }
        cout << count << endl;
    }
    return 0;
}