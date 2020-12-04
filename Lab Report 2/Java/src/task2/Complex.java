package task2;

import java.util.*; 

public class Complex {
	private double re, im;
	
	public Complex () {
		this.re = 0;
		this.im = 0;
	}

	public Complex(double r, double i) {
		this.re = r;
		this.im = i;
	}
	
	public void Input() {
		System.out.print("Real Value = ");
		Scanner input = new Scanner(System.in);
		this.re = input.nextDouble();
		System.out.print("Imaginary Value = ");
		this.im = input.nextDouble();
	}
	
	public void Show() {
		if (this.im >= 0) {
			System.out.println(this.re + "+" + this.im + "i");
		} else {
			System.out.println(this.re + this.im + "i");
		}
	}
	
	public Complex AddCom(Complex c1) {
		Complex c = new Complex();
		c.re = this.re + c1.re;
		c.im = this.im + c1.im;
		return c;
	}
	
	public Complex SubCom(Complex c1) {
		Complex c = new Complex();
		c.re = this.re - c1.re;
		c.im = this.im - c1.im;
		return c;
	}
	
	public Complex MulCom(Complex c1) {
		Complex c = new Complex();
		c.re = (c1.re * this.re) - (c1.im * this.im);
		c.im = (c1.re * this.im) + (this.re * c1.im);
		return c;
	}
}