https://leetcode.com/problems/text-justification/description/




class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int width) {
        vector<string> res;
        int n = words.size();
        for(int i=0; i<n; )
        {
            string temp = words[i];
            int j = i+1, len = words[i].length();
            while(j<n && len + 1 + words[j].length() <= width)
            {
                len = len + 1 + words[j].length();
                j++;
            }
            int extraSpacesTotal = width - len, wordSize = j-i;
            if(j == n || wordSize == 1){
                for(int k=i+1; k<j; k++){
                    temp.push_back(' ');
                    temp += words[k];
                }
                for(int k=0; k < extraSpacesTotal; k++)
                    temp.push_back(' ');
            }
            else{
                int rem = extraSpacesTotal % (wordSize-1);
                int extraSpace = extraSpacesTotal / (wordSize-1);
                cout << extraSpace << " " << rem << endl;
                for(int k=i+1; k<j; k++){
                    temp.push_back(' ');
                    if(rem){
                        temp.push_back(' ');
                        rem--;
                    }
                    for(int x=0; x < extraSpace; x++)
                        temp.push_back(' ');
                    
                    temp += words[k];
                }
            }
            res.push_back(temp);
            i = j;
        }   
        return res;
    }
};