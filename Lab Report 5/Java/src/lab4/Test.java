package lab4;

public class Test 
{
	public static void main(String[] args)
	{
		Point p =  new Point(2, 3);
		Circle c = new Circle(4, p);
		
		System.out.println("Radius is " + c.getRadius());
		
		Cylinder cy = new Cylinder(6.4, c);
		
		cy.Area();
		cy.Volume();
	}
}
