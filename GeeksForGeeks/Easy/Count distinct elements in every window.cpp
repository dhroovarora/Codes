https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?page=6&status[]=unsolved&sortBy=submissions




class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<k;++i)
            ++m[A[i]];
        ans.push_back(m.size());
        for(int i=0;i<n-k;++i){
            --m[A[i]];
            if(m[A[i]] == 0)
                m.erase(A[i]);
            ++m[A[i+k]];
            ans.push_back(m.size());
        }
        return ans;
    }
};