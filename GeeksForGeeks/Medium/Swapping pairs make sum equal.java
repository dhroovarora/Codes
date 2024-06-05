https://www.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1




class Solution {
    long findSwapValues(long a[], int n, long b[], int m) {
       long s1=0, s2=0;
       HashSet<Long> h1 = new HashSet();
       HashSet<Long> h2 = new HashSet();
       
       for(long e : a){
           s1 += e;
           h1.add(e);
       }
       for(long e : b){
           s2 += e;
           h2.add(e);
       }


       if(s1 == s2)
           return 1;
       
       Iterator<Long> it = h2.iterator(); 

       while(it.hasNext()){
           long x = it.next();
           long p = s1-s2 + 2*x;
           if(p%2 != 0)
               continue;
           long y = p/2;

           if(h1.contains(y))
               return 1;
       }
       return -1;
   }
}