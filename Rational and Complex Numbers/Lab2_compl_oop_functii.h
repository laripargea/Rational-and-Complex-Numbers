#pragma once
#include<iostream>
using std::cout;

class Complex {

private:
	double real;
	double imag;

public:
	double get_real();
	double get_imag();
	void set_real(double r);
	void set_imag(double i);
	void show_compl();
	Complex();
	Complex(double r, double i);
	Complex add(Complex o);
	Complex mult(Complex o);
	Complex quot(Complex o);
	float abs(Complex o);
	void compute_polar(Complex o);
};