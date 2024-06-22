https://www.geeksforgeeks.org/problems/extract-the-number-from-the-string3428/1




class Solution {
    long ExtractNumber(String sentence) {
        String[] arr = sentence.split("\\ ");
        long res = -1;
        boolean flag = true;
        for(String str : arr){
            if(Character.isLetter(str.trim().charAt(0)))continue;
            else{
                long temp = 0;
                for(char c : str.toCharArray()){
                    if(c != '9'){
                        temp = (temp * 10 ) + (c - '0');
                    }else{
                        temp = 0;
                        break;
                    }
                }
                res = Math.max(res, temp);
            }
        }
        return res == 0 ? -1 : res;
    }
}