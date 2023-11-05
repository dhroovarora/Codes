https://leetcode.com/problems/find-the-winner-of-an-array-game/description/?envType=daily-question&envId=2023-11-05




class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ans = arr[0];
        if(k == 1)
            return max(arr[0],arr[1]);
        if(k >= arr.size())
            return *max_element(arr.begin(),arr.end());
        int p = 0;
        for(int i=1;i<arr.size();++i){
            if(ans > arr[i])
                ++p;
            else{
                ans = arr[i];
                p = 1;
            }
            if(p == k)
                return ans;
        }
        return ans;
    }
};