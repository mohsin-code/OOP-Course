package task2;

public class Main {
	public static void main(String[] args) {
		Complex c1 = new Complex();
		Complex c2 = new Complex();
		Complex c = new Complex();
		
		System.out.println("Write values for C1: ");
		c1.Input();
		System.out.print("C1: ");
		c1.Show();
		
		System.out.println("\nWrite values for C2: ");
		c2.Input();
		System.out.print("C2: ");
		c2.Show();
		
		System.out.print("\nSum = ");
		c = c1.AddCom(c2);
		c.Show();
		
		System.out.print("\nDifference = ");
		c = c1.SubCom(c2);
		c.Show();
		
		System.out.print("\nProduct = ");
		c = c1.MulCom(c2);
		c.Show();
	}
}
