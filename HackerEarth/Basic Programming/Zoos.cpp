https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/




#include <iostream>
using namespace std;
int main() {
	string word;
	cin>>word;
	int x=0,y=0;
	for(int i=0;i<word.size();i++){
		if(word[i] == 'z')
			x++;
		else
			y++;
	}
	if((2*x) == y)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}