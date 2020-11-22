package task3;

public class BankAccount {
	private int balance;
	
	public BankAccount() {
		balance = 1000;
	}
	
	public void deposit(int amount) {
		balance += amount;
	}
	
	public void withdraw(int amount) {
		if(balance <= 500)
			System.out.println("Insufficient Balance!");
		else
			balance -= amount;
	}
	
	public void display() {
		System.out.println("Current Balance: " + balance);
	}
}