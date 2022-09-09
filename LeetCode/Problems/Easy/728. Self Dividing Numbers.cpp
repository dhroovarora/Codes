https://leetcode.com/problems/self-dividing-numbers/




class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i = left;i<=right;i++){
            
            int j = i;
            while(j>0){
                int  l = j%10;
                if(l ==0 || i%l != 0){
                    break;
                }
                j /= 10;
            }
            if(j==0){
                v.push_back(i);
            }
        }
        return v;
    }
};