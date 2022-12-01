https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/



#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		char n[100];
		cin >> n;
		int stick = 0;
		int len = strlen(n);
		for(int i=0;i<len;i++){
			switch(n[i]){
				case '0':
				stick+=6;
				break;
				case '1':
				stick+=2;
				break;
				case '2':
				stick+=5;
				break;
				case '3':
				stick+=5;
				break;
				case '4':
				stick+=4;
				break;
				case '5':
				stick+=5;
				break;
				case '6':
				stick+=6;
				break;
				case '7':
				stick+=3;
				break;
				case '8':
				stick+=7;
				break;
				case '9':
				stick+=6;
				break;
			} 
		}
		int ans = 0;
		if(stick%2){
			cout << 7;
			stick -= 3;
		}
		while(stick){
			cout << 1;
			stick -= 2;
		}
		cout<<endl;
	}
	return 0;
}