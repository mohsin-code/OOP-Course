package task3;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int x[] = new int[50], y[] = new int[50];
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Input Integer Set I1: ");
		for(int i = 0; i < 50; i++) {
			x[i] = input.nextInt();
		}
		
		System.out.print("Input Integer Set I2: ");
		for(int i = 0; i < 50; i++) {
			y[i] = input.nextInt();
		}
		
		IntegerSet i1 = new IntegerSet();
		IntegerSet i2 = new IntegerSet();
		IntegerSet i3 = new IntegerSet();
		
		i1.NewIntegerSet(x);
		System.out.print("Integer Set I1: ");
		i1.SetPrint();
		
		i2.NewIntegerSet(y);
		System.out.print("Integer Set I2: ");
		i2.SetPrint();
		
		System.out.print("Insert Element in I1: ");
		int k = input.nextInt();
		i1.InsertElement(k);
		System.out.print("I1 after inserting: ");
		i1.SetPrint();
		
		System.out.print("Delete Element from I1: ");
		int m = input.nextInt();
		i1.DeleteElement(m);
		System.out.print("I1 after Deleting: ");
		i1.SetPrint();
		
		System.out.print("Union of I1 and I2: ");
		i3 = i1.UnionOfIntegerSets(i2);
		i3.SetPrint();
		
		System.out.print("Intersection of I1 and I2: ");
		i3 = i1.IntersectionOfIntegerSets(i2);
		i3.SetPrint();
		
		System.out.print("Is I1 Equal to I2: ");
		System.out.println(i1.IsEqualTo(i2) ? "True" : "False");
	}
}
