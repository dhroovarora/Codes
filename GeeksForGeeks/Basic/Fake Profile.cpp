#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}
// } Driver Code Ends


string solve(string a) {
    // code here
    unordered_map<char,int> m;
    for(auto i:a){
        if(i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u'){
            m[i]++;
        }
    }
    if(m.size()%2==0){
        return "SHE!";
    }
    else{
        return "HE!";
    }
}