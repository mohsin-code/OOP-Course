package task1;

import java.util.*;

public class Second extends First 
{
	protected int s;
	
	public void s_input()
	{
		f_input();
		Scanner input = new Scanner(System.in);
		System.out.print("Enter Second value: ");
		this.s = input.nextInt();
	}
}