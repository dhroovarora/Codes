https://practice.geeksforgeeks.org/problems/geek-and-strings3030/1





class Solution{
public:
    vector<int> prefixCount(int N, int Q, string li[], string query[])
    {
        // code here
        vector<int> v;
        unordered_map<string,int> mp;
        for(int i=0;i<N;++i){
            
            string temp = "";
            
            for(int j=0;j<li[i].size();++j){
                temp += li[i][j];
                mp[temp]++;
            }
        }
        for(int i=0;i<Q;++i){
            v.push_back(mp[query[i]]);
        }
        return v;
    }
};