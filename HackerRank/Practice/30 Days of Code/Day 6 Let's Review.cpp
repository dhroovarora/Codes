https://www.hackerrank.com/challenges/30-review-loop/problem?isFullScreen=true




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void getme()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i = i + 2)
    {
        cout << s[i];
    }
    cout<<  " ";
    for (int i = 1; i < s.size(); i = i + 2)
    {
        cout  << s[i];
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    string a;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        getme();
        cout<<endl;
    }
    return 0;
}