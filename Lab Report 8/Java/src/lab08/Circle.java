package lab08;

public class Circle extends Point
{
	protected float radius;
	
	public Circle() 
	{
		this.x = 0;
		this.y = 0;
		this.radius = 0;
	}
	
	public Circle(int a, int b, float r)
	{
		this.x = a;
		this.y = b;
		this.radius = r; 
	}
	
	//Overridden
	public float area()
	{
		Area = (float)(Math.PI * Math.pow(this.radius, 2));
		return Area;
	}
	
	public void display()
	{
		System.out.println("\nCircle's Information: ");
		System.out.println("X = " + x);
		System.out.println("Y = " + y);
		System.out.println("Radius = " + this.radius);
		System.out.println("Area = " + area());
	}
}
