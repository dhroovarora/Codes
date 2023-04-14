https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=true




#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    map<string,string> m;
    while(t--){
        string a;
        string b;
        cin >> a >> b;
        m[a] = b;
    }
    string q;
    while(cin >> q){
        if(m.find(q) != m.end())
            cout << q << "=" << m[q];
        else
            cout << "Not found";
        cout << endl;
    }
    return 0;
}