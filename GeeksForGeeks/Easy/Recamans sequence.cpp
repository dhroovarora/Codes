https://www.geeksforgeeks.org/problems/recamans-sequence4856/1




class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int> ans;
        unordered_set<int> s;
        ans.push_back(0);
        s.insert(0);
        
        for(int i=1;i<n;i++)
        {
            if(ans[i-1]-i>0  && s.find(ans[i-1]-i) ==s.end())
            {
                ans.push_back(ans[i-1]-i);
                s.insert(ans[i-1]-i);
            }
            else
            {
                ans.push_back(ans[i-1]+i);
                s.insert(ans[i-1]+i); 
            }
        }
        return ans;
    }
};