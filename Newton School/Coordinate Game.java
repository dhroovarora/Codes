https://my.newtonschool.co/playground/code/l82bl3tjvt7p




import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int y = sc.nextInt();
        int k = sc.nextInt();
        int ans = 0;
        if(n<y){
            while(n<y){
                n += k;
                ++ans;
            }
        }
        else{
            while(n>y){
                n -= k;
                ++ans;
            }
        }
        System.out.print(ans);
    }
}