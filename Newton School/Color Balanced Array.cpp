https://my.newtonschool.co/playground/code/mgi6cw8kov06




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,g=0,r=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
        if(a[i] < 0){
            ++r;
        }
        else if(a[i] > 0){
            ++g;
        }
    }
    int z = n - g - r;
    if(r == g){
        if(z%2)
            cout << "No";
        else
            cout << "Yes";
    }
    else{
        if(min(r,g) + z >= max(r,g)){
            if((min(r,g) + z - max(r,g))%2 == 0){
                cout << "Yes";
            }
            else{
                cout << "No";
            }
        }
        else{
            cout << "No";
        }
    }
    return 0;
}