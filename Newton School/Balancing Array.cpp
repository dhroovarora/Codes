https://my.newtonschool.co/playground/code/qgw2lx6vnmqv




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,a,b;
    cin >> n >> a >> b;
    int count1 = 0,count2 = 0;
    for(int i=0;i<n;++i){
        int q;
        cin >> q;
        if(q == 1)
            ++count1;
        else
            ++count2;
    }
    cout << min(count1*a,count2*b);
    return 0;
}