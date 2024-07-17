https://my.newtonschool.co/playground/code/36vlm30t3rqn




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n), l2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> l2[i];
    }
    
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (2 * l[i] < l2[i]) {
            continue;
        } else if (l[i] > 2 * l2[i]) {
            continue;
        } else {
            c++;
        }
    }
    
    cout << c;
    return 0;
}