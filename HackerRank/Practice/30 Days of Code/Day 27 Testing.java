https://www.hackerrank.com/challenges/30-testing/problem?isFullScreen=true





 static class TestDataEmptyArray{
     
    public static int[] get_array(){
        int[] a = {};
        return a;
    }
}
 static class TestDataUniqueValues{
     private static int[] a = {1,2};
     
     public static int[] get_array(){
        return a; 
     }
     
     public static int get_expected_result(){
         int minIndex =0;
         for(int i=0; i<a.length;i++){
             if(a[i]<a[minIndex]) minIndex=1;
         }
         return minIndex;
     }
 }
 
static class TestDataExactlyTwoDifferentMinimums{
    public static int[] a = {1,1};
     
     public static int[] get_array(){
        return a; 
     }
     
     public static int get_expected_result(){
         int minIndex =0;
         for(int i=0; i<a.length;i++){
             if(a[i]<a[minIndex]) minIndex=1;
         }
         return minIndex;
     }
 }