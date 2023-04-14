https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem?isFullScreen=true




#include <bits/stdc++.h>

using namespace std;


int main()
{
    string S;
    getline(cin, S);
    try{
        cout << stoi(S.c_str());
    }
    catch (const exception& e){
        cout<<"Bad String";
    }
    return 0;
}