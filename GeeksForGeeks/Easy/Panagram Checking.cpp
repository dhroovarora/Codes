https://www.geeksforgeeks.org/problems/pangram-checking-1587115620/1




class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        int a[26] = {0};
        for(auto it : s){
            if((it >= 'A' && it<= 'Z') || (it >='a' && it <= 'z'))
                ++a[tolower(it) - 'a'];
        }
        for(int i=0;i<26;++i)
            if(a[i] == 0)
                return 0;
        return 1;
    }

};