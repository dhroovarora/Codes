https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1




// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && arr[i] == arr[i-1])
                continue;
            for(int j =i+1;j<n-2;j++){
                if(j != i+1 && arr[j] == arr[j-1])
                    continue;
                int l = j+1;
                int r = n - 1;
                while(l < r){
                    long long val = arr[i];
                    val += arr[j];
                    val += arr[l];
                    val += arr[r];
                    if(val == k){
                        vector<int> a{arr[i] , arr[j] , arr[l] , arr[r]};
                        ans.push_back(a);
                        ++l;
                        --r;
                        while(l<r && arr[l] == arr[l-1])
                            l++;
                        while(l<r && arr[r] == arr[r+1])
                            --r;
                    }
                    else if(val > k)
                        --r;
                    else
                        ++l;
                }
            }
        }
        return ans;
    }
};