https://www.geeksforgeeks.org/problems/search-pattern0205/1




class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            int n=pat.size(),m=txt.size(),i=1,j=0;
            vector<int> v, lps(n+1,-1);
            while(i<n){
                if(pat[i]==pat[0]){
                    int j=0,c=1;
                    while(i<n && pat[i]==pat[j]){
                        lps[i+1]=c++;
                        i++;
                        j++;
                    }
                }
                else i++;
            }
            i=1;
            while(j<m){
                while(i<=n && pat[i-1]==txt[j]){
                    i++;
                    j++;
                }
                if(i==n+1) v.push_back(j-n+1);
                if(lps[i-1]==-1){
                    if(i==1) j++;
                    i=0;
                }
                else i=lps[i-1];
                i++;
            }
            return v;
        }
     
};