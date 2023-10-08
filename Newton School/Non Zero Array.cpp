https://my.newtonschool.co/playground/code/tjrrtcpkayvr




#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    int current_sum = 0;
    int current_product = 1;
    int count0 = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        current_sum += arr[i];
        current_product *= arr[i];
        if(arr[i] == 0)
            ++count0;
    }

    if (current_sum != 0 && current_product != 0) {
        cout << 0;
    } else {
        if(current_product != 0){
            cout << 1;
        }
        else{
            if(count0 + current_sum == 0)
                cout << count0 + 1;
            else
                cout << count0;
        }
    }

    return 0;
}