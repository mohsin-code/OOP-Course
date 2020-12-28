package task1;

public class Test 
{
	public static void main(String[] args)
	{
		Employee e1 = new Employee();
		
		e1.input();
		e1.show();
		
		Employee e2 = e1;
		
		e2.show();
		
		Employee e3 = null;
		
		try
		{
			e3 = (Employee) e1.clone();
			e3.show();
		}
		catch (CloneNotSupportedException err)
		{
			err.printStackTrace();
		}
		
		/*
		//To change department into EE
		e1.input();
		e1.show();
		
		//This is Shallow Copied Object
		e2.show();
		
		//This is Deep Copied Object
		e3.show();
		*/
	}
}
