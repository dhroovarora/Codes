https://www.geeksforgeeks.org/problems/top-k-numbers3425/1




class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& a, int n, int k) {
        vector<vector<int>> ans;
        vector<int> v,mp(101,0);
        int z;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                continue;
            z=a[i];
            ++mp[z];
            for(int j=0;j<v.size();j++){
                if(a[i]==v[j]){
                    v[j]=z;
                    z=-1;
                    break;
                }
                if(mp[v[j]]>mp[z])
                    continue;
                if(mp[v[j]]<mp[z])
                    swap(v[j],z);
                else{
                    if(z<v[j])
                        swap(v[j],z);
                }
            }
            if(z!=-1&&v.size()<k)
                v.push_back (z);
            ans.push_back (v);
        }
        return ans;
    }
};