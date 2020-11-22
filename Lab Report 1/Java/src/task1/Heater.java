package task1;
public class Heater {
	int temprature;
	
	public Heater() {
		temprature = 20;
	}
	
	public void warmer() {
		temprature += 5;
	}
	
	public void cooler() {
		temprature -= 5;
	}
	
	public void display() {
		System.out.println("\nTemprature is: " + temprature);
	}
}