package task2;
public class Point {
	int x;
	int y;
	
	public Point() {
		x = 0;
		y = 0;
	}
	
	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void getX() {
		System.out.println(x);
	}
	
	public void getY() {
		System.out.println(y);
	}
	
	public void setX(int x) {
		this.x = x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public void display() {
		System.out.println("Point is: (" + x + "," + y + ")");
	}
}