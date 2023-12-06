https://my.newtonschool.co/playground/code/o4xqhk2k2ae7




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main() {
	// Your code here
    int n;
    cin >> n;
    int nums[n];
    for(int i=0;i<n;++i)
        cin >> nums[i];
    int k;
    cin >> k;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (countSetBits(i) == k) {
            sum += nums[i];
        }
    }
    cout << sum;
    return 0;
}