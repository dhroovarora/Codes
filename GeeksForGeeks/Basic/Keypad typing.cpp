
#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
            cout<<2;
        if(s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
            cout<<3;
        if(s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
            cout<<4;
        if(s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
            cout<<5;
        if(s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
            cout<<6;
        if(s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
            cout<<7;
        if(s[i] == 't' || s[i] == 'u' || s[i] == 'v')
            cout<<8;
        if(s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
            cout<<9;
    }
}
