https://my.newtonschool.co/playground/code/2r814p67qrzo




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    vector<int> ans = {1};
    while(--n){
        vector<int> temp;
        temp.push_back(ans[0]);
        for(int i=0;i<ans.size()-1;++i){
            temp.push_back(ans[i] + ans[i+1]);
        }
        temp.push_back(ans[ans.size()-1]);
        ans = temp;
    }
    for(int i=0;i<ans.size();++i)
        cout << ans[i] << ' ';
}