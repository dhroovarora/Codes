https://www.geeksforgeeks.org/problems/word-break1352/1




class Solution
{
public:
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        unordered_map<char,int> m;
        for(auto i:s)
            ++m[i];
        for(string str : dictionary){
            size_t found = s.find(str);
            while(found != string::npos){
                for(char ch:str)
                    --m[ch];
                found = s.find(str,found+1);
            }
        }
        for(auto it:m)
            if(it.second>0)
                return 0;
        return 1;
    }
};