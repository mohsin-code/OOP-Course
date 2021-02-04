package lab08;

class Main 
{
	public static void main(String[] args)
	{
		Shape p = new Point(1, 2);
		Shape c = new Circle(3, 4, 5);
		Shape cy = new Cylinder(6, 7, 8, 9);
		
		p.display();
		c.display();
		cy.display();
	}
}
