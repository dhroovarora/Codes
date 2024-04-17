https://www.geeksforgeeks.org/problems/count-pairs-in-an-array4145/1




class Solution{
    public:
    int countPairs(int arr[] , int n ) {
        int ans = 0;
        vector<int> lis;
        for(int i = 0; i < n; i++){
            int tmp = i * arr[i], pos = upper_bound(lis.begin(), lis.end(), tmp) - lis.begin();
            ans += i - pos; 
            lis.insert(lis.begin() + pos, tmp);
        }
        return ans;
    }
};