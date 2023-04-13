https://leetcode.com/problems/validate-stack-sequences/description/




class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        
        int j=0;

        for(auto p : pushed){
            s.push(p);
            while(s.size() && s.top() == popped[j]){
                s.pop();
                j++;
            }
        }
        return s.size() == 0;
    }
};