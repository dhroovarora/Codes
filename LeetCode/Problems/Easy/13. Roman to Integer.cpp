https://leetcode.com/problems/roman-to-integer/




class Solution {
public:
    int romanToInt(string s) {
        int i=0,z=0, a = s.length();
        while (i<a)
        {
            if(s[i] == 'I')
            {
                if(s[i+1] == 'V')
                {
                    z = z + 4;
                    i++;
                }
                else if(s[i+1] == 'X')
                {
                    z = z+  9;
                    i++;
                }
                else
                {
                z = z + 1;
                }
            }
            else if(s[i] == 'V')
            {
                z = z + 5;
            }
            else if(s[i] == 'X')
            {
                if(s[i+1] == 'L')
                {
                    z = z + 40;
                    i++;
                }
                else if(s[i+1] == 'C')
                {
                    z = z + 90;
                    i++;
                }
                else
                {
                    z = z + 10;
                }
            }
            else if(s[i] == 'L')
            {
                z = z + 50;
            }
            else if(s[i] == 'C')
            {
                if(s[i+1] == 'D')
                {
                    z = z + 400;
                    i++;
                }
                else if(s[i+1] == 'M')
                {
                    z = z + 900;
                    i++;
                }
                else
                {
                    z = z + 100;
                }
            }
            else if(s[i] == 'D')
            {
                z = z + 500;
            }
            else if(s[i] == 'M')
            {
                z = z + 1000;
            }
        i++;
        }
        return z;
    }
};