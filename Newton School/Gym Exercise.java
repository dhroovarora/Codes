https://my.newtonschool.co/playground/code/1mhipc63s65c




import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();
        int ans = (z >= x) ? (z-x >= y) ? 2 : 1 : 0;
        System.out.print(ans);
    }
}