https://my.newtonschool.co/playground/code/is32rcq80kmj




import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        // Your code here
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        if(x < 1000)
            System.out.print(100);
        else
            System.out.print(x/10);
    }
}