package task1;

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
		Scanner s1 = new Scanner(System.in);
		System.out.print("Real Value = ");
		this.re = s1.nextDouble();
		System.out.print("Imaginary Value = ");
		this.im = s1.nextDouble();
	}
	
	public void Show() {
		if (this.im >= 0) {
			System.out.println(this.re + "+" + this.im + "i");
		} else {
			System.out.println(this.re + this.im + "i");
		}
	}
	
	public void AddCom(Complex c1, Complex c2) {
		this.re = c1.re + c2.re;
		this.im = c1.im + c2.im;
	}
	
	public void SubCom(Complex c1, Complex c2) {
		this.re = c1.re - c2.re;
		this.im = c1.im - c2.im;
	}
	
	public void MulCom(Complex c1, Complex c2) {
		this.re = (c1.re * c2.re) - (c1.im * c2.im);
		this.im = (c1.re * c2.im) + (c2.re * c1.im);
	}
}