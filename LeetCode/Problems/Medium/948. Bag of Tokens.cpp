https://leetcode.com/problems/bag-of-tokens/




class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size() == 1){
            if(tokens[0] <power){
                return 1;
            }
        }
        sort(tokens.begin(),tokens.end());
        int score =0;
        int i=0;
        int j=tokens.size() - 1;
        while(i<=j && power>=0){
            if(tokens[i] <= power){
                score++;
                power -= tokens[i];
                i++;
            }
            else{
                if(i==j)
                    break;
                if(score==0){
                    return 0;
                }
                power += tokens[j];
                score--;
                j--;
            }
        }
        return score;
    }
};