https://leetcode.com/problems/baseball-game/




class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for(string ch : ops){
            if(ch == "+"){
                v.push_back(v.back() + v[v.size() - 2]);
            }
            else if(ch == "C"){
                v.pop_back();
            }
            else if(ch == "D"){
                v.push_back(2*(v.back()));
            }
            else{
                v.push_back(stoi(ch));
            }
        }
        int sum = 0;
        for(int i=0;i<v.size();i++){
            sum += v[i];
        }
        return sum;
    }
};