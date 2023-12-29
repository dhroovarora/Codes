https://www.geeksforgeeks.org/problems/check-if-a-string-is-repetition-of-its-substring-of-k-length3302/1




class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
    {
        // Your Code Here
        if((n%k) !=0)
            return 0;
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i+=k)
            ++mp[s.substr(i,k)];
        return mp.size()<=2?1:0;
    }
};