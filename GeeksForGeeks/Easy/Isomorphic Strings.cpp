https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1




class Solution()
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size() != str2.size())
            return 0;
        // Your code here
        unordered_map<int,int> m,n;
        for(int i=0;i<str1.size();++i){
            m[str1[i]] = str2[i];
            n[str2[i]] = str1[i];
        }
        for(int i=0;i<str1.size();++i)
            if(m[str1[i]] != str2[i] || n[str2[i]] != str1[i])
                return 0;
        
        return 1;
    }
};