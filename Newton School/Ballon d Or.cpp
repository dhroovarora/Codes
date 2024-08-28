https://my.newtonschool.co/playground/code/o75cqjdmd3cs




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c = 0;
        for(int i=0;i<n;++i){
            int a;
            cin >> a;
            if(a%2==0)
                ++c;
        }
        if(c%8==0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}
