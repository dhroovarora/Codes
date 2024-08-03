https://www.codechef.com/practice/course/java/PJA03/problems/MARKSTW




import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		
		// write your code here
		if(x >= 2*y)
		    System.out.print("Yes");
		else
		    System.out.print("No");
		
	}
}