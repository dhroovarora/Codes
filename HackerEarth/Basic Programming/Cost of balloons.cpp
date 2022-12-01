https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/




#include <iostream>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t--){
		int g,p;
		cin>>g>>p;
		int n;
		cin>>n;
		int ans1 = 0,ans2=0;
		while(n--){
			int x,y;
			cin>>x>>y;
			if(x==1){
				ans1 += g;
				ans2 += p;
			}
			if(y==1){
				ans1 += p;
				ans2 += g;
			}
		}
		cout << min(ans1,ans2)<<endl;
	}
	return 0;
}