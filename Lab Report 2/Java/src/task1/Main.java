package task1;

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
		c.AddCom(c1, c2);
		c.Show();
		
		System.out.print("\nDifference = ");
		c.SubCom(c1, c2);
		c.Show();
		
		System.out.print("\nProduct = ");
		c.MulCom(c1, c2);
		c.Show();
	}
}
