https://my.newtonschool.co/playground/code/sariszkpdz08




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    int mini = *min_element(a,a+n);
    int c = 0;
    for(int i=0;i<n;++i){
        if(a[i] == mini)
            ++c;
    }
    cout << n - c;
    return 0;
}