package lab08;

public class Point extends Shape 
{
	protected int x;
	protected int y;
	
	public Point()
	{
		this.x = 0;
		this.y = 0;
	}
	
	public Point(int a, int b)
	{
		this.x = a;
		this.y = b;
	}
	
	//Overridden
	public void display()
	{
		System.out.println("Point's Information: ");
		System.out.println("X = " + this.x);
		System.out.println("Y = " + this.y);
	}
}
