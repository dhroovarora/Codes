https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1




class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string ans = "";
	    for(int i=0;i<str.size();i++){
	        if(ans.find(str[i]) == string::npos)
	            ans += str[i];
	    }
	    return ans;
	}
};