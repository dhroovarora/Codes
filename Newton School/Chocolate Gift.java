https://my.newtonschool.co/playground/code/w9nespm5tp5u




import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        int c = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        System.out.print((c-x)*y);
    }
}