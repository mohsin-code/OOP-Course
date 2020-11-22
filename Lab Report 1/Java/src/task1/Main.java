package task1;
class Main {
	public static void main(String[] args) {
		Heater h1 = new Heater();
		
		h1.display();
		h1.cooler();
		h1.display();
		h1.warmer();
		h1.display();
		
		Heater h2 = new Heater();
		
		h2.display();
		h2.cooler();
		h2.cooler();
		h2.cooler();
		h2.cooler();
		h2.cooler();
		h2.display();
	}
}