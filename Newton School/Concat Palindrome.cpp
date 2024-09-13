https://my.newtonschool.co/playground/code/h0x77ck6r6ih




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        int arr[26] = {0};
        for(char i : a){
            ++arr[i-'a'];
            arr[i-'a'] %= 2;
        }
        for(char i : b){
            ++arr[i-'a'];
            arr[i-'a'] %= 2;
        }
        bool flag = 0,flag2 = 0;
        for(int i : arr){
            if(i == 1){
                if(flag == 1){
                    flag2 = 1;
                    break;
                }
                flag = 1;
            }
        }
        (flag2) ? cout << "No" : cout << "Yes";
        cout << endl;
    }
    return 0;
}