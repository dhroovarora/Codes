https://www.geeksforgeeks.org/problems/search-pattern-rabin-karp-algorithm--141631/1




class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> ans ;
            int i = 0;
            while(i<text.size()){
                bool flag = true;
                int k = 0;
                int j = i;
                while(k<pattern.size()){
                    if(pattern[k] != text[j]){
                        flag  = false;
                        break;
                    }
                    ++j;
                    ++k;
                }
                if(flag){
                    ans.push_back(i+1);
                }
                ++i;
            }
            return ans;
        }
};