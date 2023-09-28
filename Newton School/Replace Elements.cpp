https://my.newtonschool.co/playground/code/9wwnxf288j9x




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string canReduceToD(int n, int d, vector<int>& a) {
    int maxi = *max_element(a.begin(),a.end());
    
    if (maxi <= d) {
        return "Yes";
    }
    
    a.erase(remove(a.begin(), a.end(), maxi), a.end());
    int smallest1 = *min_element(a.begin(), a.end());
    a.erase(remove(a.begin(), a.end(), smallest1), a.end());
    int smallest2 = *min_element(a.begin(), a.end());
    
    if (smallest1 + smallest2 <= d) {
        return "Yes";
    }
    
    return "No";
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    string result = canReduceToD(n, d, a);
    cout << result << endl;
    
    return 0;
}