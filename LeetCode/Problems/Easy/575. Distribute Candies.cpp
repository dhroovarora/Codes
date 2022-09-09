https://leetcode.com/problems/distribute-candies/




class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int k = candyType.size();
        for(int i=0;i<k;i++){
            s.insert(candyType[i]);
        }
        if(k/2<s.size()){
            return k/2;
        }
        return s.size();
    }
};