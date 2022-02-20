#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
   int s1[26] = {0};
   int s2[26] = {0};
   int count = 0;
   
   for(int i = 0; i < str1.size(); i++)
   {
       s1[str1[i] - 'a']++;
   }
   
   for(int i = 0; i < str2.size(); i++)
   {
       s2[str2[i] - 'a']++;
   }
   
   for(int i = 0; i < 26; i++)
   {
       count += abs(s1[i] - s2[i]);
   }
   return count;
// Your code goes here
}