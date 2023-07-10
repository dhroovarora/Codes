https://www.codechef.com/problems/NONADJFLIP




#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s2(n, '0');
        int step = 0;
        while (s != s2)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    s[i] = '0';
                    i++;
                }
            }
            step++;
        }
        cout << step << endl;
    }
    return 0;
}