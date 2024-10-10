https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1




class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int n = arr.size();
        unordered_map<int,int> m;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(m.size() == 0 || m.find(arr[i]) == m.end())
                m[arr[i]] = i;
            else{
                ans = max(ans,i - m[arr[i]]);
            }
        }
        return ans;
    }
};