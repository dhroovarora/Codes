https://leetcode.com/problems/best-poker-hand/




class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool flag = true;
        for(int i=0;i<suits.size()-1;i++){
            if(suits[i+1] != suits[i]){
                flag = false;
                break;
            }
        }
        if(flag)
            return "Flush";
        else{
            unordered_map<int,int> m;
            for(int i=0;i<ranks.size();i++){
                m[ranks[i]]++;
            }
            for(auto it:m){
                if(it.second >= 3)
                    return "Three of a Kind";
            }
            for(auto it:m){
                if(it.second == 2)
                    return "Pair";
            }
            return "High Card";
        }
    }
};