https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1




class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
       int N = arr.size();
       sort(arr.begin(),arr.end());
       string s;
       if(N==1){
           return arr[0];
       }
       int i = 0;
       int j = i+1;
       
       while(i<N && j<N){
           string k = arr[i];
           string l = arr[j];
           int m = k.size();
           int n = l.size();
           int p = 0;
           while(k[p] == l[p]){
               s += k[p];
               p++;
           }
           j++;
           break;
       }
       while(j<N){
          string k = arr[j];
          int i = 0;
          string tmp = "";
          while(s[i]==k[i]){
              tmp += s[i];
              i++;
          }
          s = tmp;
          tmp.erase();
          j++;
       }
       if(s.empty()){
           return "-1";
       }
       return s;
    }
};