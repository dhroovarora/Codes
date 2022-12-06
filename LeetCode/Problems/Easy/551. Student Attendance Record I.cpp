https://leetcode.com/problems/student-attendance-record-i/




class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'A')
                a++;
            if(a > 1)
                return 0;
        }
        if(s.size() < 3)
            return 1;
        for(int i=0;i<s.size() - 2;i++){
            if(s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L')
                return 0;
        }
        return 1;
    }
};