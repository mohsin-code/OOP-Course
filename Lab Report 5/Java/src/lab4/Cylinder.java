package lab4;

public class Cylinder extends Circle
{
	private double height;
	
	public Cylinder()
	{
		height = 0;
	}
	
	public Cylinder(double h, Circle c)
	{
		radius = c.getRadius();
		height = h;
	}
	
	public Cylinder(float h, float r, Point p)
	{
		radius = r;
		height = h;
	}
	
	public Cylinder(float h, float r, int x, int y)
	{
		height = h;
		radius = r;
		this.x = x;
		this.y = y;
	}
	
	public void Area()
	{
		System.out.println("Area is " + (2 * Math.PI * radius * (radius + height)));
	}
	
	public void Volume()
	{
		System.out.println("Volume is " + (Math.PI * Math.pow(radius, 2) * height));
	}
}