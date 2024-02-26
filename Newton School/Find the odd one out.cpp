https://my.newtonschool.co/playground/code/wclbht65tslk




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
    int result = 0;
    int x, sum;
    for (int i = 0; i < 32; i++) {
        sum = 0;
        x = (1 << i);
        for (int j = 0; j < n; j++) {
            if (arr[j] & x)
                sum++;
        }
        if ((sum % 3) != 0)
            result |= x;
    }
    cout << result;
    return 0;
}