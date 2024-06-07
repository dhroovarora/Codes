https://leetcode.com/problems/replace-words/description/?envType=daily-question&envId=2024-06-07




class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
        HashSet<String> h = new HashSet<>();
        for(String d : dictionary)
            h.add(d);
        String a = "";
        String ans = "";
        for(int i=0;i<=sentence.length();++i){
            if(i == sentence.length() || sentence.charAt(i) == ' '){
                int j=0;
                int n = a.length();
                String temp = "";
                while(j<n){
                    temp += a.charAt(j);
                    if(h.contains(temp)){
                        break;
                    }
                    ++j;
                }
                if(i != 0)
                    ans += " ";
                ans += temp;
                a = "";
            }
            else{
                a += sentence.charAt(i);
            }
        }
        return ans.substring(1);
    }
}