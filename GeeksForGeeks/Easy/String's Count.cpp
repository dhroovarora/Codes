https://www.geeksforgeeks.org/problems/count-of-strings-that-can-be-formed-using-a-b-and-c-under-given-constraints1135/1




long long int countStr(long long int n){
   if(n==1) return 3;
   if(n==2) return 8;
   long long int ans= (n-1)*(n)+ 2*n + 1 + n*(n-1)/2  + n*(n-1)*(n-2)/2;
   return ans;
}