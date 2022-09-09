https://leetcode.com/problems/rotate-string/



class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return 1;
        }
        for(int i=0;i<s.size()-1;i++){
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.end()-1);
            if(s==goal){
                return 1;
            }
        }
        return 0;
    }
};