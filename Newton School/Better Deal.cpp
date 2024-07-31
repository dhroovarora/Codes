https://my.newtonschool.co/playground/code/hppb39k3jsl7




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        (100 - a<200 - 2*b) ? cout << "First" : (100-a>200-2*b) ? cout << "Second" : cout <<"Both";
        cout << endl;
    }
    return 0;
}