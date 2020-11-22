public class Heater {
	double temprature;
	
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
		System.out.println("Temprature is: " + temprature);
	}
}