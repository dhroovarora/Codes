https://www.geeksforgeeks.org/problems/check-frequencies4211/1




class Solution{
public:	
	 bool sameFreq(string s)
    {
        // code here 
        unordered_map<char,int> um;
        for(int i=0;i<s.size();i++)
        {
            um[s[i]]++;
            
        }
        vector<int> v;
        for(auto x:um)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        
        if(v[v.size()-1]-v[0]==0)
            return(1);
        if((v[v.size()-1]-v[0]==1 )&& (v[v.size()-1]!=v[v.size()-2]))
            return(1);
        if(v[0]==1 && v[1]==v[v.size()-1])
            return(1);
        
        return(0);
    }
};