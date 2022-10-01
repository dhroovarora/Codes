https://practice.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1




public:
    int minChar(string str){
        //Write your code here
        int ans = 0,i=0,j=str.size() -1,last = j;
        while(i < j){
            if(str[i] == str[j]){
                i++;
                j--;
            }
            else{
                ans++;
                i=0;
                j= --last;
            }
        }
        return ans;
    }
};