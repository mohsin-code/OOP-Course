package lab4;

public class Circle extends Point
{
	protected float radius;
	
	public Circle()
	{
		radius = 0;
	}
	
	public Circle(float r, Point p)
	{
		radius = r;
	}
	
	public Circle(float r, int x, int y)
	{
		radius = r;
		this.x = x;
		this.y = y;
	}
	
	public void setRadius(float r)
	{
		radius = r;
	}
	
	public float getRadius()
	{
		return radius;
	}
	
	public void Circumference()
	{
		System.out.print("Circumference" + (2 * Math.PI * radius));
	}
}
