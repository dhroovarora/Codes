https://www.geeksforgeeks.org/problems/binary-representation-of-next-number3648/1




class Solution {
    String binaryNextNumber(String s) {
        // code here.
        int firstNonZeroIndex = s.indexOf('1');
        if(firstNonZeroIndex == -1)
            return "1";
            
        s = s.substring(firstNonZeroIndex);
        
        boolean foundZero = false;
        StringBuilder sb = new StringBuilder(s);
        for(int i=sb.length()-1;i>=0;--i){
            if(sb.charAt(i) == '0'){
                sb.setCharAt(i,'1');
                foundZero = true;
                for(int j=i+1;j<sb.length();++j)
                    sb.setCharAt(j,'0');
                break;
            }
        }
        if(!foundZero){
            StringBuilder temp = new StringBuilder("1");
            for(int i=0;i<sb.length();++i)
                temp.append('0');
            return temp.toString();
        }
        return sb.toString();
    }
}