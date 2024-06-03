https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/?envType=daily-question&envId=2024-06-03




class Solution {
    public int appendCharacters(String s, String t) {
        int i=0,j=0,n=s.length(),m=t.length();
        while(i<n && j<m){
            if(s.charAt(i) == t.charAt(j))
                ++j;
            ++i;
        }
        return (m-j);
    }
}