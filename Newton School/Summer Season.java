https://my.newtonschool.co/playground/code/lszsiqnc55yr




import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int t = a;
        int ans = 0;
        while(a<b){
            a += t;
            ++ans;
        }
        System.out.print(ans);
    }
}