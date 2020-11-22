package task2;

class Main {
	public static void main(String[] args) {
		Point p1 = new Point();
		
		p1.display();
		p1.setX(2);
		p1.setY(3);
		p1.display();
		
		Point p2 = new Point(5,2);
		
		p2.display();
		p2.setX(6);
		p2.setY(3);
		p2.display();
	}
}