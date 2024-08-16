https://www.codechef.com/practice/course/java/LPJAAS11/problems/LJAAS110




import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ans = 1;
		while(n>0){
		    ans *= n;
		    --n;
		}
		System.out.println(ans);
	}
}