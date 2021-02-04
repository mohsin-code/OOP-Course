package lab08;

abstract class Shape 
{
	protected float Area;
	protected float Volume;
	
	public float area()
	{
		System.out.println("Empty Shape");
		return 0;
	}
	
	public float volume()
	{
		System.out.println("Empty Shape");
		return 0;
	}
	
	abstract void display();
}
