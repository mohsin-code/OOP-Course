package lab08;

public class Cylinder extends Circle
{
	protected float height;
	
	public Cylinder()
	{
		this.x = 0;
		this.y = 0;
		this.radius = 0;
		this.height = 0;
	}
	
	public Cylinder(int a, int b, float r, float h)
	{
		this.x = a;
		this.y = b;
		this.radius = r;
		this.height = h;
	}
	
	//Overridden
	public float area()
	{
		Area = (float) ((2 * Math.PI * Math.pow(radius, 2)) + (2 * Math.PI * radius * this.height));
		return Area;
	}
	
	public float volume()
	{
		Volume = (float) (Math.PI * Math.pow(radius, 2) * this.height);
		return Volume;
	}
	
	public void display()
	{
		System.out.println("\nCylinder's Information: ");
		System.out.println("X = " + x);
		System.out.println("Y = " + y);
		System.out.println("Radius = " + radius);
		System.out.println("Height = " + height);
		System.out.println("Area = " + area());
		System.out.println("Volume = " + volume());
	}
}
