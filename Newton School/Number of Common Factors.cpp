https://my.newtonschool.co/playground/code/1wzdti81anaq




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b;
    cin >> a >> b;
    set<int> s;
    for(int i=1;i<=sqrt(a);++i){
        if(a%i==0){
            if(b%i==0)
                s.insert(i);
            if(b%(a/i)==0)
                s.insert(a/i);
        }
    }
    cout << s.size();
    return 0;
}