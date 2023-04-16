https://www.codingninjas.com/codestudio/problems/reverse-words_696444?topList=striver-sde-sheet-problems




#include<bits/stdc++.h>
string reverseString(string str)
{
    // Write your code here.
    vector<string>res;
    string ans="";
    stringstream s(str);
    string words;
    while(s >> words)    
        res.push_back(words);
    reverse(res.begin(),res.end());
    for(auto it:res){
        ans.append(it);
        ans.append(" ");
    }
    return ans;
}