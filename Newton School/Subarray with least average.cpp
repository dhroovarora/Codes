https://my.newtonschool.co/playground/code/xb34v9tfi4sr




#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l = 0, r = 0;
    int ans = 0;
    int current_sum = 0;
    int min_sum = INT_MAX;

    while (r < n) {
        current_sum += a[r];
        if ((r - l + 1) == k) {
            if (current_sum < min_sum) {
                min_sum = current_sum;
                ans = l;
            }
            current_sum -= a[l];
            l++;
        }
        r++;
    }
    
    cout << ans + 1;
    
    return 0;
}