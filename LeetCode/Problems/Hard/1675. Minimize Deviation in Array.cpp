https://leetcode.com/problems/minimize-deviation-in-array/description/




class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> q;
        int minval = INT_MAX;
        for(auto i:nums){
            if(i%2)
                i *= 2;
            q.push(i);
            minval = min(minval,i);
        }
        int mindev = INT_MAX;
        while(q.top()%2 == 0){
            int k = q.top();
            q.pop();
            mindev = min(mindev,k - minval);
            k /= 2;
            minval = min(minval,k);
            q.push(k);
        }
        return min(mindev,q.top() - minval);
    }
};