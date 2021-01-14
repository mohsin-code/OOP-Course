package task1;

import java.util.*;

public class Third extends Second
{
	protected int t;
	
	public void t_input()
	{
		s_input();
		Scanner input = new Scanner(System.in);
		System.out.print("Enter Third value: ");
		this.t = input.nextInt();
	}
	
	public void max()
	{
		int max = (this.t>this.s)&&(this.t>this.f)?this.t:(this.s>this.f)?this.s:this.f;
		System.out.println("\nMax: " + max);
	}
	
	public void show()
	{
		System.out.println("\nFirst value: " + this.f);
		System.out.println("Second value: " + this.s);
		System.out.println("Third value: " + this.t);
	}
}