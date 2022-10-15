https://leetcode.com/problems/string-compression/




class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = chars.size();
        if(j==1){
            return 1;
        }
        else if(j==2){
            if(chars[i+1] == chars[i]){
                chars[i+1] = '2';
            }
            return 2;
        }
        while(i<j){
            int sum = 1;
            char temp = chars[i];
            while(i+1< j && chars[i+1] == temp){
                sum++;
                i++;
            }
            chars.push_back(temp);
            if(sum > 1){
                for(char digit : to_string(sum)) 
					chars.push_back(digit);
            }
            i++;
        }
        chars.erase(chars.begin(),chars.begin() + j);
        return chars.size();
    }
};