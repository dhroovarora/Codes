https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1




class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int a[n] = {0};
        vector<int> ans;
        for(int i=0;i<n;++i){
            ++a[arr[i]];
        }
        for(int i=0;i<n;++i){
            if(a[i] > 1)
                ans.push_back(i);
        }
        if(ans.size() == 0)
            return {-1};
        return ans;
    }
};