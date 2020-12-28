package task1;

import java.util.*;

public class Employee implements Cloneable
{
	private String name;
	private String department;
	private double salary;
	private double serviceTime;
	
	public Employee()
	{
		name = null;
		department = null;
		salary = 0;
		serviceTime = 0;
	}
	
	public Employee(String name, String department, double salary, double serviceTime)
	{
		this.name = name;
		this.department = department;
		this.salary = salary;
		this.serviceTime = serviceTime;
	}
	
	public void input()
	{
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter Name: ");
		this.name = input.nextLine();
		System.out.print("Enter Department: ");
		this.department = input.nextLine();
		System.out.print("Enter Salary: ");
		this.salary = input.nextDouble();
		System.out.print("Enter Time of Service: ");
		this.serviceTime = input.nextDouble();
	}
	
	//Deep Clone
	@Override
	public Object clone() throws CloneNotSupportedException
	{
		Employee EmpClone = (Employee) super.clone();
		return EmpClone;
	}
	
	public void show()
	{
		System.out.println("\nDetails:\nName: " + this.name);
		System.out.println("Department: " + this.department);
		System.out.println("Salary: " + this.salary);
		System.out.println("Time of Service: " + this.serviceTime);
	}
}