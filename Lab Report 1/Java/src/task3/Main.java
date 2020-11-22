package task3;

class Main {
	public static void main(String[] args) {
		BankAccount Acc1 = new BankAccount();
		
		Acc1.display();
		Acc1.deposit(500);
		Acc1.display();
		Acc1.withdraw(500);
		Acc1.display();
		Acc1.withdraw(500);
		Acc1.display();
		Acc1.withdraw(500);
		Acc1.display();
	}
}