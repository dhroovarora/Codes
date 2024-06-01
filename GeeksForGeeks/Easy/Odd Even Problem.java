https://www.geeksforgeeks.org/problems/help-nobita0532/1




class Solution {
    public static String oddEven(String s) {
        // code here
        int[] arr = new int[26];
        int ans = 0;
        for(int i=0;i<s.length();++i){
            ++arr[s.charAt(i) - 'a'];
        }
        for(int i=0;i<26;++i){
            if(arr[i] != 0){
               if(( i%2 == 0 && arr[i]%2 != 0 )|| ( i%2 != 0 && arr[i]%2 == 0 ))
                    ++ans;
            }
            
        }
        if(ans%2==0)
            return "EVEN";
        return "ODD";
    }
}