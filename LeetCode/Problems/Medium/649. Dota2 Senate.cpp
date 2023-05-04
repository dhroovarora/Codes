https://leetcode.com/problems/dota2-senate/description/




class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<char> dhr;
        for(auto i : senate)
            dhr.push(i);
        queue<char> q;
        while(dhr.size()){
            if(q.size() == 0){
                q.push(dhr.front());
                dhr.pop();
            }
            else{
                if(q.front() != dhr.front()){
                    dhr.push(q.front());
                    q.pop();
                    dhr.pop();
                }
                else{
                    q.push(dhr.front());
                    dhr.pop();
                }

            }
        }
        return (q.front() == 'R') ? "Radiant" : "Dire";
    }
};