https://practice.geeksforgeeks.org/problems/maximize-the-sum-of-selected-numbers-from-an-array-to-make-it-empty0836/1




public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            m[a[i]]++;
        int ans = 0;
        for(int i=n-1;i>=0;i--){
            if(m[a[i]] > 0){
                m[a[i]]--;
                ans += a[i];
                m[a[i] - 1]--;
            }
        }
        return ans;
    }

};