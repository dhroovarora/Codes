https://my.newtonschool.co/playground/code/xmtlfrbjt0ck




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int q;
    cin >> q;
    int a = ((q/10)%10)*100 + (q%10)*10 + (q/100);
    int b = (q%10)*100 + (q/100)*10 + ((q/10)%10);
    cout << q + a + b;
    return 0;
}