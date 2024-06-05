https://my.newtonschool.co/playground/code/83q7xo630iqd




import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int xoring = 0;
        for(int i=0;i<n;++i){
            arr[i] = sc.nextInt();
            xoring ^= arr[i];
        }
        int ans = xoring;
        for(int i=0;i<n;++i){
            ans = Math.min(ans,xoring^arr[i]);
        }
        System.out.print(ans);
    }
}